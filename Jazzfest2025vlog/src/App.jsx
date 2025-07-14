import { BrowserRouter as Router, Routes, Route } from "react-router-dom";
import "./App.css";
import DayPage from "./DayPage.jsx";
import Home from "./Home.jsx";
import Navbar from "./Navbar.jsx";

function App() {
  return (
      <Router>
        <Navbar />
        <Routes>
          <Route path="/" element={<Home />} />
          {[...Array(10)].map((_, i) => (
            <Route
              key={i}
              path={`/day${i + 1}`}
              element={<DayPage day={i + 1} />}
            />
          ))}
        </Routes>
      </Router>
    );
}

export default App
