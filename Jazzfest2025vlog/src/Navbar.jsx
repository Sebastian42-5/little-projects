import { Link } from "react-router-dom";

export default function Navbar() {
  return (
    <nav className="p-4 bg-black text-white flex flex-wrap gap-2 justify-center">
      <Link to="/">Home</Link>
      {[...Array(10)].map((_, i) => (
        <Link key={i} to={`/day${i + 1}`}>Day {i + 1}</Link>
      ))}
    </nav>
  );
}