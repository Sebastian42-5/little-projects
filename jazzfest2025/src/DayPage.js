const videoData = {
  1: {
    videos: ["https://www.youtube.com/embed/abc123", "https://www.youtube.com/embed/def456"],
    text: "Day 1 was packed with soul and fusion performances that kicked off the festival in style.",
  },
//   2: {

//   },
//   3: {

//   },

//   4: {

//   },

//   5: {

//   },

//   6: {

//   },

//   7: {

//   },

//   8: {

//   },

//   9: {

//   },

//   10: {

//   },

};

export default function DayPage({ day }) {
  const { videos, text } = videoData[day] || { videos: [], text: "No content yet." };

  return (
    <div className="p-6">
      <h2 className="text-2xl font-bold mb-4">Day {day} Highlights</h2>
      <p className="mb-4">{text}</p>
      <div className="grid gap-4">
        {videos.map((url, i) => (
          <iframe
            key={i}
            width="560"
            height="315"
            src={url}
            title={`Video ${i + 1}`}
            frameBorder="0"
            allowFullScreen
          ></iframe>
        ))}
      </div>
    </div>
  );
}