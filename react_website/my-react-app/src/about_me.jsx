import GreatWhite from './assets/great-white-og_4x3.avif'
import './about_me.css'

function AboutMe(){
    return(
    <div className = "card">
        <img id= "shark_image" src= {GreatWhite} alt="My_image"/>
        <h2>About me</h2>
        <p>
    I have always been a creative person. I love
    creating stuff in any form, whether is in
    text, in a drawing, in code or in music. I like
    expressing myself and trying new ideas. I
    love travelling, sharks, anime, video games,
    gundams and model building, robots and
    technology.
        </p>
    </div>

    );
}

export default AboutMe