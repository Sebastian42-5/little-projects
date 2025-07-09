import subprocess
import time
import tkinter as tk 
from tkinter import messagebox

WIFI_NAME = 'Bell2'


def toggle_wifi():
    try: 
        subprocess.run("netsh wlan disconnect", shell=True, check=True)
        time.sleep(3)

        subprocess.run(f"netsh wlan connect name=\"{WIFI_NAME}\"", shell=True, check=True)

        messagebox.showinfo("Wi-Fi toggle", "Disconnected and reconnected from the Wi-Fi")

    except subprocess.CalledProcessError:
        messagebox.showerror("Error", "Couldn't connect to the Wi-FI")

    
root = tk.Tk()

root.title("Wi-fi toggler")

root.geometry("200x100")

btn = tk.Button(root, text="Set Wi-Fi", command=toggle_wifi)

btn.pack(pady=30)

btn.mainloop()



