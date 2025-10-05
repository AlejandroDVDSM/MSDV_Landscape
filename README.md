# MSDV_Landscape

This project was made to learn about how lighting  works in Unreal Engine.

<img width="1600" height="1023" alt="image" src="https://github.com/user-attachments/assets/239e0240-17e5-47c0-a8ff-870ace184630" />

The lighting consists of a `DirectionalLight`, an `ExponentialHeightFog`, a `SkyAtmosphere`, a `SkyLight` and a `VolumetricCloud`. Along these, there are two `PointLights` inside a house. Some options has been enabled to improve the realism of the level and to add a better ambience, such as the `Light Shaft Occlusion` property in the directional light to occlude fog and atmosphere in-scattering, the `Real Time Capture` in the `SkyLight` and the `Volumetric` Fog in the `ExponentialHeightFog`.

lighting inside and outside the house without `ExponentialHeightFog`, `PointLights` or `PostProcessVolumes`.
<img width="974" height="487" alt="image" src="https://github.com/user-attachments/assets/6b00678e-367a-4139-af0e-d15e7f021009" />

lighting inside and outside the house with `ExponentialHeightFog` and `PointLights` but with no `PostProcessVolumes`.
<img width="979" height="491" alt="image" src="https://github.com/user-attachments/assets/1267d8e2-bf90-43e2-a9cb-b7d902442ce7" />

lighting inside and outside the house with `ExponentialHeightFog`, `PointLights`, `PostProcessVolumes` and baked lights.
<img width="1025" height="512" alt="image" src="https://github.com/user-attachments/assets/994de399-50fa-4015-898a-e32bd4093f03" />

Color bleeding:
<img width="846" height="496" alt="image" src="https://github.com/user-attachments/assets/f9e3f33c-0a3c-461c-8506-f2ae2aae4e74" />


Lightmass settings:
<img width="2585" height="1312" alt="image" src="https://github.com/user-attachments/assets/713a7508-ff72-4c40-ab80-775ad28bb70b" />

Project settings:
<img width="3425" height="2112" alt="image" src="https://github.com/user-attachments/assets/3c6e3da0-48ee-4061-aaee-457ec3bb8e67" />

This project also make uso of the landscape and foliage tools provided by Unreal Engine.
