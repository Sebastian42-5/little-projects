import { Player } from '@lottiefiles/react-lottie-player';
import musicNote from './Music notes.json';

export default function Home() {
  return (
    <div className="text-center p-6">
      <h1 className="text-4xl font-bold mb-6">JazzFest 2025 Highlights</h1>
      <Player
        autoplay
        loop
        src={musicNote}
        style={{ height: '200px', width: '200px', margin: '0 auto' }}
      />
    </div>
  );
}