import { Player } from '@lottiefiles/react-lottie-player';

import musicNote from './src/assets/Music notes.json'

export default function Home(){
    return(
        <div className = "text center p-6">
            <h1 classname = "text-4xl font-bold mb-6"> Jazzfest 2025 highlights</h1>
            <Player
                autoplay
                loop
                src = {musicNote}
                style={{ height: '200px', width: '200px', margin: '0 auto' }}
            />
        </div>
    );
}