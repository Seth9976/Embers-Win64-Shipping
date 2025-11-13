// 函数: sub_1421146f0
// 地址: 0x1421146f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce8e80(arg1, arg2)
int64_t* rcx = *(*arg2 + 8)
(*(*rcx + 0x1d8))(rcx, &data_1439a9478)
int64_t* rcx_1 = *(*arg2 + 8)
(*(*rcx_1 + 0x1d8))(rcx_1, &data_1439a9478)
int32_t rbx_1 = *(arg1 + 0x48)
void* rsi_1 = arg1 + 0x40
uint64_t result_1 = 0
int32_t var_40 = rbx_1
int64_t rdi = *rsi_1

if (rbx_1 != 0)
    sub_1405a4c70(&result_1, rbx_1, 0)
    memcpy(result_1, rdi, rbx_1 * 2)

int32_t rax_5 = rcx_1[8].d

if (rax_5 s< 0x1f1)
    sub_140a306e0(rsi_1, u"Parameters.WorldPosition", u"Parameters.AbsoluteWorldPosition", 0)
else if (rax_5 s< 0x1f9)
    int64_t* i = &data_143f498f0
    TEB* gsbase
    
    if (data_143f49d80
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f49d80)
        
        if (data_143f49d80 == 0xffffffff)
            sub_1405947f0(&data_143f498f0, 0x16)
            int32_t rax_18 = data_143f498f8 + 0x16
            bool cond:0_1 = rax_18 s<= data_143f498fc
            data_143f498f8 = rax_18
            
            if (not(cond:0_1))
                sub_140594770(&data_143f498f0)
            
            UnDecorator::getReferenceType(data_143f498f0, u"FieldOfViewWideAngles", 0x2c)
            data_143f49900 = 0
            data_143f49908 = 0
            sub_1405947f0(&data_143f49900, 0x1a)
            int32_t rax_19 = data_143f49908.d + 0x1a
            bool cond:1_1 = rax_19 s<= data_143f49908:4.d
            data_143f49908.d = rax_19
            
            if (not(cond:1_1))
                sub_140594770(&data_143f49900)
            
            UnDecorator::getReferenceType(data_143f49900, u"PrevFieldOfViewWideAngles", 0x34)
            data_143f49910 = 0
            data_143f49918 = 0
            sub_1405947f0(&data_143f49910, 0xc)
            int32_t rax_20 = data_143f49918.d + 0xc
            bool cond:2_1 = rax_20 s<= data_143f49918:4.d
            data_143f49918.d = rax_20
            
            if (not(cond:2_1))
                sub_140594770(&data_143f49910)
            
            UnDecorator::getReferenceType(data_143f49910, u"ViewRectMin", 0x18)
            data_143f49920 = 0
            data_143f49928 = 0
            sub_1405947f0(&data_143f49920, 0x13)
            int32_t rax_21 = data_143f49928.d + 0x13
            bool cond:4_1 = rax_21 s<= data_143f49928:4.d
            data_143f49928.d = rax_21
            
            if (not(cond:4_1))
                sub_140594770(&data_143f49920)
            
            UnDecorator::getReferenceType(data_143f49920, u"ViewSizeAndInvSize", 0x26)
            data_143f49930 = 0
            data_143f49938 = 0
            sub_1405947f0(&data_143f49930, 0x15)
            int32_t rax_22 = data_143f49938.d + 0x15
            bool cond:5_1 = rax_22 s<= data_143f49938:4.d
            data_143f49938.d = rax_22
            
            if (not(cond:5_1))
                sub_140594770(&data_143f49930)
            
            UnDecorator::getReferenceType(data_143f49930, u"BufferSizeAndInvSize", 0x2a)
            data_143f49940 = 0
            data_143f49948 = 0
            sub_1405947f0(&data_143f49940, 0xe)
            int32_t rax_23 = data_143f49948.d + 0xe
            bool cond:7_1 = rax_23 s<= data_143f49948:4.d
            data_143f49948.d = rax_23
            
            if (not(cond:7_1))
                sub_140594770(&data_143f49940)
            
            UnDecorator::getReferenceType(data_143f49940, u"ExposureScale", 0x1c)
            data_143f49950 = 0
            data_143f49958 = 0
            sub_1405947f0(&data_143f49950, 0x19)
            int32_t rax_24 = data_143f49958.d + 0x19
            bool cond:9_1 = rax_24 s<= data_143f49958:4.d
            data_143f49958.d = rax_24
            
            if (not(cond:9_1))
                sub_140594770(&data_143f49950)
            
            UnDecorator::getReferenceType(data_143f49950, u"DiffuseOverrideParameter", 0x32)
            data_143f49960 = 0
            data_143f49968 = 0
            sub_1405947f0(&data_143f49960, 0x1a)
            int32_t rax_25 = data_143f49968.d + 0x1a
            bool cond:10_1 = rax_25 s<= data_143f49968:4.d
            data_143f49968.d = rax_25
            
            if (not(cond:10_1))
                sub_140594770(&data_143f49960)
            
            UnDecorator::getReferenceType(data_143f49960, u"SpecularOverrideParameter", 0x34)
            data_143f49970 = 0
            data_143f49978 = 0
            sub_1405947f0(&data_143f49970, 0x18)
            int32_t rax_26 = data_143f49978.d + 0x18
            bool cond:11_1 = rax_26 s<= data_143f49978:4.d
            data_143f49978.d = rax_26
            
            if (not(cond:11_1))
                sub_140594770(&data_143f49970)
            
            UnDecorator::getReferenceType(data_143f49970, u"NormalOverrideParameter", 0x30)
            data_143f49980 = 0
            data_143f49988 = 0
            sub_1405947f0(&data_143f49980, 0x1b)
            int32_t rax_27 = data_143f49988.d + 0x1b
            bool cond:12_1 = rax_27 s<= data_143f49988:4.d
            data_143f49988.d = rax_27
            
            if (not(cond:12_1))
                sub_140594770(&data_143f49980)
            
            UnDecorator::getReferenceType(data_143f49980, u"RoughnessOverrideParameter", 0x36)
            data_143f49990 = 0
            data_143f49998 = 0
            sub_1405947f0(&data_143f49990, 0x12)
            int32_t rax_28 = data_143f49998.d + 0x12
            bool cond:13_1 = rax_28 s<= data_143f49998:4.d
            data_143f49998.d = rax_28
            
            if (not(cond:13_1))
                sub_140594770(&data_143f49990)
            
            UnDecorator::getReferenceType(data_143f49990, u"PrevFrameGameTime", 0x24)
            data_143f499a0 = 0
            data_143f499a8 = 0
            sub_1405947f0(&data_143f499a0, 0x12)
            int32_t rax_29 = data_143f499a8.d + 0x12
            bool cond:14_1 = rax_29 s<= data_143f499a8:4.d
            data_143f499a8.d = rax_29
            
            if (not(cond:14_1))
                sub_140594770(&data_143f499a0)
            
            UnDecorator::getReferenceType(data_143f499a0, u"PrevFrameRealTime", 0x24)
            data_143f499b0 = 0
            data_143f499b8 = 0
            sub_1405947f0(&data_143f499b0, 0x10)
            int32_t rax_30 = data_143f499b8.d + 0x10
            bool cond:15_1 = rax_30 s<= data_143f499b8:4.d
            data_143f499b8.d = rax_30
            
            if (not(cond:15_1))
                sub_140594770(&data_143f499b0)
            
            UnDecorator::getReferenceType(data_143f499b0, u"OutOfBoundsMask", 0x20)
            data_143f499c0 = 0
            data_143f499c8 = 0
            sub_1405947f0(&data_143f499c0, 0x22)
            int32_t rax_31 = data_143f499c8.d + 0x22
            bool cond:16_1 = rax_31 s<= data_143f499c8:4.d
            data_143f499c8.d = rax_31
            
            if (not(cond:16_1))
                sub_140594770(&data_143f499c0)
            
            UnDecorator::getReferenceType(data_143f499c0, WorldCameraMovementSinceLastFrame", 0x44)
            data_143f499d0 = 0
            data_143f499d8 = 0
            sub_1405947f0(&data_143f499d0, 0xc)
            int32_t rax_32 = data_143f499d8.d + 0xc
            bool cond:17_1 = rax_32 s<= data_143f499d8:4.d
            data_143f499d8.d = rax_32
            
            if (not(cond:17_1))
                sub_140594770(&data_143f499d0)
            
            UnDecorator::getReferenceType(data_143f499d0, u"CullingSign", 0x18)
            data_143f499e0 = 0
            data_143f499e8 = 0
            sub_1405947f0(&data_143f499e0, 0xa)
            int32_t rax_33 = data_143f499e8.d + 0xa
            bool cond:18_1 = rax_33 s<= data_143f499e8:4.d
            data_143f499e8.d = rax_33
            
            if (not(cond:18_1))
                sub_140594770(&data_143f499e0)
            
            UnDecorator::getReferenceType(data_143f499e0, u"NearPlane", 0x14)
            data_143f499f0 = 0
            data_143f499f8 = 0
            sub_1405947f0(&data_143f499f0, 0x1b)
            int32_t rax_34 = data_143f499f8.d + 0x1b
            bool cond:19_1 = rax_34 s<= data_143f499f8:4.d
            data_143f499f8.d = rax_34
            
            if (not(cond:19_1))
                sub_140594770(&data_143f499f0)
            
            UnDecorator::getReferenceType(data_143f499f0, u"AdaptiveTessellationFactor", 0x36)
            data_143f49a00 = 0
            data_143f49a08 = 0
            sub_1405947f0(&data_143f49a00, 9)
            int32_t rax_35 = data_143f49a08.d + 9
            bool cond:20_1 = rax_35 s<= data_143f49a08:4.d
            data_143f49a08.d = rax_35
            
            if (not(cond:20_1))
                sub_140594770(&data_143f49a00)
            
            UnDecorator::getReferenceType(data_143f49a00, u"GameTime", 0x12)
            data_143f49a10 = 0
            data_143f49a18 = 0
            sub_1405947f0(&data_143f49a10, 9)
            int32_t rax_36 = data_143f49a18.d + 9
            bool cond:21_1 = rax_36 s<= data_143f49a18:4.d
            data_143f49a18.d = rax_36
            
            if (not(cond:21_1))
                sub_140594770(&data_143f49a10)
            
            UnDecorator::getReferenceType(data_143f49a10, u"RealTime", 0x12)
            data_143f49a20 = 0
            data_143f49a28 = 0
            sub_1405947f0(&data_143f49a20, 7)
            int32_t rax_37 = data_143f49a28.d + 7
            bool cond:22_1 = rax_37 s<= data_143f49a28:4.d
            data_143f49a28.d = rax_37
            
            if (not(cond:22_1))
                sub_140594770(&data_143f49a20)
            
            UnDecorator::getReferenceType(data_143f49a20, u"Random", 0xe)
            data_143f49a30 = 0
            data_143f49a38 = 0
            sub_1405947f0(&data_143f49a30, 0xc)
            int32_t rax_38 = data_143f49a38.d + 0xc
            bool cond:23_1 = rax_38 s<= data_143f49a38:4.d
            data_143f49a38.d = rax_38
            
            if (not(cond:23_1))
                sub_140594770(&data_143f49a30)
            
            UnDecorator::getReferenceType(data_143f49a30, u"FrameNumber", 0x18)
            data_143f49a40 = 0
            data_143f49a48 = 0
            sub_1405947f0(&data_143f49a40, 0xa)
            int32_t rax_39 = data_143f49a48.d + 0xa
            bool cond:24_1 = rax_39 s<= data_143f49a48:4.d
            data_143f49a48.d = rax_39
            
            if (not(cond:24_1))
                sub_140594770(&data_143f49a40)
            
            UnDecorator::getReferenceType(data_143f49a40, u"CameraCut", 0x14)
            data_143f49a50 = 0
            data_143f49a58 = 0
            sub_1405947f0(&data_143f49a50, 0xd)
            int32_t rax_40 = data_143f49a58.d + 0xd
            bool cond:25_1 = rax_40 s<= data_143f49a58:4.d
            data_143f49a58.d = rax_40
            
            if (not(cond:25_1))
                sub_140594770(&data_143f49a50)
            
            UnDecorator::getReferenceType(data_143f49a50, u"UseLightmaps", 0x1a)
            data_143f49a60 = 0
            data_143f49a68 = 0
            sub_1405947f0(&data_143f49a60, 0x12)
            int32_t rax_41 = data_143f49a68.d + 0x12
            bool cond:26_1 = rax_41 s<= data_143f49a68:4.d
            data_143f49a68.d = rax_41
            
            if (not(cond:26_1))
                sub_140594770(&data_143f49a60)
            
            UnDecorator::getReferenceType(data_143f49a60, u"UnlitViewmodeMask", 0x24)
            data_143f49a70 = 0
            data_143f49a78 = 0
            sub_1405947f0(&data_143f49a70, 0x16)
            int32_t rax_42 = data_143f49a78.d + 0x16
            bool cond:27_1 = rax_42 s<= data_143f49a78:4.d
            data_143f49a78.d = rax_42
            
            if (not(cond:27_1))
                sub_140594770(&data_143f49a70)
            
            UnDecorator::getReferenceType(data_143f49a70, u"DirectionalLightColor", 0x2c)
            data_143f49a80 = 0
            data_143f49a88 = 0
            sub_1405947f0(&data_143f49a80, 0x1a)
            int32_t rax_43 = data_143f49a88.d + 0x1a
            bool cond:28_1 = rax_43 s<= data_143f49a88:4.d
            data_143f49a88.d = rax_43
            
            if (not(cond:28_1))
                sub_140594770(&data_143f49a80)
            
            UnDecorator::getReferenceType(data_143f49a80, u"DirectionalLightDirection", 0x34)
            data_143f49a90 = 0
            data_143f49a98 = 0
            sub_1405947f0(&data_143f49a90, 0x21)
            int32_t rax_44 = data_143f49a98.d + 0x21
            bool cond:29_1 = rax_44 s<= data_143f49a98:4.d
            data_143f49a98.d = rax_44
            
            if (not(cond:29_1))
                sub_140594770(&data_143f49a90)
            
            UnDecorator::getReferenceType(data_143f49a90, u"DirectionalLightShadowTransition", 0x42)
            data_143f49aa0 = 0
            data_143f49aa8 = 0
            sub_1405947f0(&data_143f49aa0, 0x1b)
            int32_t rax_45 = data_143f49aa8.d + 0x1b
            bool cond:30_1 = rax_45 s<= data_143f49aa8:4.d
            data_143f49aa8.d = rax_45
            
            if (not(cond:30_1))
                sub_140594770(&data_143f49aa0)
            
            UnDecorator::getReferenceType(data_143f49aa0, u"DirectionalLightShadowSize", 0x36)
            data_143f49ab0 = 0
            data_143f49ab8 = 0
            sub_1405947f0(&data_143f49ab0, 0x1f)
            int32_t rax_46 = data_143f49ab8.d + 0x1f
            bool cond:31_1 = rax_46 s<= data_143f49ab8:4.d
            data_143f49ab8.d = rax_46
            
            if (not(cond:31_1))
                sub_140594770(&data_143f49ab0)
            
            UnDecorator::getReferenceType(data_143f49ab0, u"DirectionalLightScreenToShadow", 0x3e)
            data_143f49ac0 = 0
            data_143f49ac8 = 0
            sub_1405947f0(&data_143f49ac0, 0x20)
            int32_t rax_47 = data_143f49ac8.d + 0x20
            bool cond:32_1 = rax_47 s<= data_143f49ac8:4.d
            data_143f49ac8.d = rax_47
            
            if (not(cond:32_1))
                sub_140594770(&data_143f49ac0)
            
            UnDecorator::getReferenceType(data_143f49ac0, u"DirectionalLightShadowDistances", 0x40)
            data_143f49ad0 = 0
            data_143f49ad8 = 0
            sub_1405947f0(&data_143f49ad0, 0xe)
            int32_t rax_48 = data_143f49ad8.d + 0xe
            bool cond:33_1 = rax_48 s<= data_143f49ad8:4.d
            data_143f49ad8.d = rax_48
            
            if (not(cond:33_1))
                sub_140594770(&data_143f49ad0)
            
            UnDecorator::getReferenceType(data_143f49ad0, u"UpperSkyColor", 0x1c)
            data_143f49ae0 = 0
            data_143f49ae8 = 0
            sub_1405947f0(&data_143f49ae0, 0xe)
            int32_t rax_49 = data_143f49ae8.d + 0xe
            bool cond:34_1 = rax_49 s<= data_143f49ae8:4.d
            data_143f49ae8.d = rax_49
            
            if (not(cond:34_1))
                sub_140594770(&data_143f49ae0)
            
            UnDecorator::getReferenceType(data_143f49ae0, u"LowerSkyColor", 0x1c)
            data_143f49af0 = 0
            data_143f49af8 = 0
            sub_1405947f0(&data_143f49af0, 0x1e)
            int32_t rax_50 = data_143f49af8.d + 0x1e
            bool cond:35_1 = rax_50 s<= data_143f49af8:4.d
            data_143f49af8.d = rax_50
            
            if (not(cond:35_1))
                sub_140594770(&data_143f49af0)
            
            UnDecorator::getReferenceType(data_143f49af0, u"TranslucencyLightingVolumeMin", 0x3c)
            data_143f49b00 = 0
            data_143f49b08 = 0
            sub_1405947f0(&data_143f49b00, 0x22)
            int32_t rax_51 = data_143f49b08.d + 0x22
            bool cond:36_1 = rax_51 s<= data_143f49b08:4.d
            data_143f49b08.d = rax_51
            
            if (not(cond:36_1))
                sub_140594770(&data_143f49b00)
            
            UnDecorator::getReferenceType(data_143f49b00, TranslucencyLightingVolumeInvSize", 0x44)
            data_143f49b10 = 0
            data_143f49b18 = 0
            sub_1405947f0(&data_143f49b10, 0x11)
            int32_t rax_52 = data_143f49b18.d + 0x11
            bool cond:37_1 = rax_52 s<= data_143f49b18:4.d
            data_143f49b18.d = rax_52
            
            if (not(cond:37_1))
                sub_140594770(&data_143f49b10)
            
            UnDecorator::getReferenceType(data_143f49b10, u"TemporalAAParams", 0x22)
            data_143f49b20 = 0
            data_143f49b28 = 0
            sub_1405947f0(&data_143f49b20, 0x10)
            int32_t rax_53 = data_143f49b28.d + 0x10
            bool cond:38_1 = rax_53 s<= data_143f49b28:4.d
            data_143f49b28.d = rax_53
            
            if (not(cond:38_1))
                sub_140594770(&data_143f49b20)
            
            UnDecorator::getReferenceType(data_143f49b20, u"CircleDOFParams", 0x20)
            data_143f49b30 = 0
            data_143f49b38 = 0
            sub_1405947f0(&data_143f49b30, 0x1a)
            int32_t rax_54 = data_143f49b38.d + 0x1a
            bool cond:39_1 = rax_54 s<= data_143f49b38:4.d
            data_143f49b38.d = rax_54
            
            if (not(cond:39_1))
                sub_140594770(&data_143f49b30)
            
            UnDecorator::getReferenceType(data_143f49b30, u"DepthOfFieldFocalDistance", 0x34)
            data_143f49b40 = 0
            data_143f49b48 = 0
            sub_1405947f0(&data_143f49b40, 0x12)
            int32_t rax_55 = data_143f49b48.d + 0x12
            bool cond:40_1 = rax_55 s<= data_143f49b48:4.d
            data_143f49b48.d = rax_55
            
            if (not(cond:40_1))
                sub_140594770(&data_143f49b40)
            
            UnDecorator::getReferenceType(data_143f49b40, u"DepthOfFieldScale", 0x24)
            data_143f49b50 = 0
            data_143f49b58 = 0
            sub_1405947f0(&data_143f49b50, 0x18)
            int32_t rax_56 = data_143f49b58.d + 0x18
            bool cond:41_1 = rax_56 s<= data_143f49b58:4.d
            data_143f49b58.d = rax_56
            
            if (not(cond:41_1))
                sub_140594770(&data_143f49b50)
            
            UnDecorator::getReferenceType(data_143f49b50, u"DepthOfFieldFocalLength", 0x30)
            data_143f49b60 = 0
            data_143f49b68 = 0
            sub_1405947f0(&data_143f49b60, 0x18)
            int32_t rax_57 = data_143f49b68.d + 0x18
            bool cond:42_1 = rax_57 s<= data_143f49b68:4.d
            data_143f49b68.d = rax_57
            
            if (not(cond:42_1))
                sub_140594770(&data_143f49b60)
            
            UnDecorator::getReferenceType(data_143f49b60, u"DepthOfFieldFocalRegion", 0x30)
            data_143f49b70 = 0
            data_143f49b78 = 0
            sub_1405947f0(&data_143f49b70, 0x21)
            int32_t rax_58 = data_143f49b78.d + 0x21
            bool cond:43_1 = rax_58 s<= data_143f49b78:4.d
            data_143f49b78.d = rax_58
            
            if (not(cond:43_1))
                sub_140594770(&data_143f49b70)
            
            UnDecorator::getReferenceType(data_143f49b70, u"DepthOfFieldNearTransitionRegion", 0x42)
            data_143f49b80 = 0
            data_143f49b88 = 0
            sub_1405947f0(&data_143f49b80, 0x20)
            int32_t rax_59 = data_143f49b88.d + 0x20
            bool cond:44_1 = rax_59 s<= data_143f49b88:4.d
            data_143f49b88.d = rax_59
            
            if (not(cond:44_1))
                sub_140594770(&data_143f49b80)
            
            UnDecorator::getReferenceType(data_143f49b80, u"DepthOfFieldFarTransitionRegion", 0x40)
            data_143f49b90 = 0
            data_143f49b98 = 0
            sub_1405947f0(&data_143f49b90, 0x1c)
            int32_t rax_60 = data_143f49b98.d + 0x1c
            bool cond:45_1 = rax_60 s<= data_143f49b98:4.d
            data_143f49b98.d = rax_60
            
            if (not(cond:45_1))
                sub_140594770(&data_143f49b90)
            
            UnDecorator::getReferenceType(data_143f49b90, u"MotionBlurNormalizedToPixel", 0x38)
            data_143f49ba0 = 0
            data_143f49ba8 = 0
            sub_1405947f0(&data_143f49ba0, 0x14)
            int32_t rax_61 = data_143f49ba8.d + 0x14
            bool cond:46_1 = rax_61 s<= data_143f49ba8:4.d
            data_143f49ba8.d = rax_61
            
            if (not(cond:46_1))
                sub_140594770(&data_143f49ba0)
            
            UnDecorator::getReferenceType(data_143f49ba0, u"GeneralPurposeTweak", 0x28)
            data_143f49bb0 = 0
            data_143f49bb8 = 0
            sub_1405947f0(&data_143f49bb0, 0x13)
            int32_t rax_62 = data_143f49bb8.d + 0x13
            bool cond:47_1 = rax_62 s<= data_143f49bb8:4.d
            data_143f49bb8.d = rax_62
            
            if (not(cond:47_1))
                sub_140594770(&data_143f49bb0)
            
            UnDecorator::getReferenceType(data_143f49bb0, u"DemosaicVposOffset", 0x26)
            data_143f49bc0 = 0
            data_143f49bc8 = 0
            sub_1405947f0(&data_143f49bc0, 0x1b)
            int32_t rax_63 = data_143f49bc8.d + 0x1b
            bool cond:48_1 = rax_63 s<= data_143f49bc8:4.d
            data_143f49bc8.d = rax_63
            
            if (not(cond:48_1))
                sub_140594770(&data_143f49bc0)
            
            UnDecorator::getReferenceType(data_143f49bc0, u"IndirectLightingColorScale", 0x36)
            data_143f49bd0 = 0
            data_143f49bd8 = 0
            sub_1405947f0(&data_143f49bd0, 0x15)
            int32_t rax_64 = data_143f49bd8.d + 0x15
            bool cond:49_1 = rax_64 s<= data_143f49bd8:4.d
            data_143f49bd8.d = rax_64
            
            if (not(cond:49_1))
                sub_140594770(&data_143f49bd0)
            
            UnDecorator::getReferenceType(data_143f49bd0, u"HDR32bppEncodingMode", 0x2a)
            data_143f49be0 = 0
            data_143f49be8 = 0
            sub_1405947f0(&data_143f49be0, 0x1b)
            int32_t rax_65 = data_143f49be8.d + 0x1b
            bool cond:50_1 = rax_65 s<= data_143f49be8:4.d
            data_143f49be8.d = rax_65
            
            if (not(cond:50_1))
                sub_140594770(&data_143f49be0)
            
            UnDecorator::getReferenceType(data_143f49be0, u"AtmosphericFogSunDirection", 0x36)
            data_143f49bf0 = 0
            data_143f49bf8 = 0
            sub_1405947f0(&data_143f49bf0, 0x17)
            int32_t rax_66 = data_143f49bf8.d + 0x17
            bool cond:51_1 = rax_66 s<= data_143f49bf8:4.d
            data_143f49bf8.d = rax_66
            
            if (not(cond:51_1))
                sub_140594770(&data_143f49bf0)
            
            UnDecorator::getReferenceType(data_143f49bf0, u"AtmosphericFogSunPower", 0x2e)
            data_143f49c00 = 0
            data_143f49c08 = 0
            sub_1405947f0(&data_143f49c00, 0x14)
            int32_t rax_67 = data_143f49c08.d + 0x14
            bool cond:52_1 = rax_67 s<= data_143f49c08:4.d
            data_143f49c08.d = rax_67
            
            if (not(cond:52_1))
                sub_140594770(&data_143f49c00)
            
            UnDecorator::getReferenceType(data_143f49c00, u"AtmosphericFogPower", 0x28)
            data_143f49c10 = 0
            data_143f49c18 = 0
            sub_1405947f0(&data_143f49c10, 0x1b)
            int32_t rax_68 = data_143f49c18.d + 0x1b
            bool cond:53_1 = rax_68 s<= data_143f49c18:4.d
            data_143f49c18.d = rax_68
            
            if (not(cond:53_1))
                sub_140594770(&data_143f49c10)
            
            UnDecorator::getReferenceType(data_143f49c10, u"AtmosphericFogDensityScale", 0x36)
            data_143f49c20 = 0
            data_143f49c28 = 0
            sub_1405947f0(&data_143f49c20, 0x1c)
            int32_t rax_69 = data_143f49c28.d + 0x1c
            bool cond:54_1 = rax_69 s<= data_143f49c28:4.d
            data_143f49c28.d = rax_69
            
            if (not(cond:54_1))
                sub_140594770(&data_143f49c20)
            
            UnDecorator::getReferenceType(data_143f49c20, u"AtmosphericFogDensityOffset", 0x38)
            data_143f49c30 = 0
            data_143f49c38 = 0
            sub_1405947f0(&data_143f49c30, 0x1b)
            int32_t rax_70 = data_143f49c38.d + 0x1b
            bool cond:55_1 = rax_70 s<= data_143f49c38:4.d
            data_143f49c38.d = rax_70
            
            if (not(cond:55_1))
                sub_140594770(&data_143f49c30)
            
            UnDecorator::getReferenceType(data_143f49c30, u"AtmosphericFogGroundOffset", 0x36)
            data_143f49c40 = 0
            data_143f49c48 = 0
            sub_1405947f0(&data_143f49c40, 0x1c)
            int32_t rax_71 = data_143f49c48.d + 0x1c
            bool cond:56_1 = rax_71 s<= data_143f49c48:4.d
            data_143f49c48.d = rax_71
            
            if (not(cond:56_1))
                sub_140594770(&data_143f49c40)
            
            UnDecorator::getReferenceType(data_143f49c40, u"AtmosphericFogDistanceScale", 0x38)
            data_143f49c50 = 0
            data_143f49c58 = 0
            sub_1405947f0(&data_143f49c50, 0x1c)
            int32_t rax_72 = data_143f49c58.d + 0x1c
            bool cond:57_1 = rax_72 s<= data_143f49c58:4.d
            data_143f49c58.d = rax_72
            
            if (not(cond:57_1))
                sub_140594770(&data_143f49c50)
            
            UnDecorator::getReferenceType(data_143f49c50, u"AtmosphericFogAltitudeScale", 0x38)
            data_143f49c60 = 0
            data_143f49c68 = 0
            sub_1405947f0(&data_143f49c60, 0x22)
            int32_t rax_73 = data_143f49c68.d + 0x22
            bool cond:58_1 = rax_73 s<= data_143f49c68:4.d
            data_143f49c68.d = rax_73
            
            if (not(cond:58_1))
                sub_140594770(&data_143f49c60)
            
            UnDecorator::getReferenceType(data_143f49c60, AtmosphericFogHeightScaleRayleigh", 0x44)
            data_143f49c70 = 0
            data_143f49c78 = 0
            sub_1405947f0(&data_143f49c70, 0x1c)
            int32_t rax_74 = data_143f49c78.d + 0x1c
            bool cond:59_1 = rax_74 s<= data_143f49c78:4.d
            data_143f49c78.d = rax_74
            
            if (not(cond:59_1))
                sub_140594770(&data_143f49c70)
            
            UnDecorator::getReferenceType(data_143f49c70, u"AtmosphericFogStartDistance", 0x38)
            data_143f49c80 = 0
            data_143f49c88 = 0
            sub_1405947f0(&data_143f49c80, 0x1d)
            int32_t rax_75 = data_143f49c88.d + 0x1d
            bool cond:60_1 = rax_75 s<= data_143f49c88:4.d
            data_143f49c88.d = rax_75
            
            if (not(cond:60_1))
                sub_140594770(&data_143f49c80)
            
            UnDecorator::getReferenceType(data_143f49c80, u"AtmosphericFogDistanceOffset", 0x3a)
            data_143f49c90 = 0
            data_143f49c98 = 0
            sub_1405947f0(&data_143f49c90, 0x1b)
            int32_t rax_76 = data_143f49c98.d + 0x1b
            bool cond:61_1 = rax_76 s<= data_143f49c98:4.d
            data_143f49c98.d = rax_76
            
            if (not(cond:61_1))
                sub_140594770(&data_143f49c90)
            
            UnDecorator::getReferenceType(data_143f49c90, u"AtmosphericFogSunDiscScale", 0x36)
            data_143f49ca0 = 0
            data_143f49ca8 = 0
            sub_1405947f0(&data_143f49ca0, 0x19)
            int32_t rax_77 = data_143f49ca8.d + 0x19
            bool cond:62_1 = rax_77 s<= data_143f49ca8:4.d
            data_143f49ca8.d = rax_77
            
            if (not(cond:62_1))
                sub_140594770(&data_143f49ca0)
            
            UnDecorator::getReferenceType(data_143f49ca0, u"AtmosphericFogRenderMask", 0x32)
            data_143f49cb0 = 0
            data_143f49cb8 = 0
            sub_1405947f0(&data_143f49cb0, 0x29)
            int32_t rax_78 = data_143f49cb8.d + 0x29
            bool cond:63_1 = rax_78 s<= data_143f49cb8:4.d
            data_143f49cb8.d = rax_78
            
            if (not(cond:63_1))
                sub_140594770(&data_143f49cb0)
            
            UnDecorator::getReferenceType(data_143f49cb0, 
                AtmosphericFogInscatterAltitudeSampleNum", 0x52)
            data_143f49cc0 = 0
            data_143f49cc8 = 0
            sub_1405947f0(&data_143f49cc0, 0x17)
            int32_t rax_79 = data_143f49cc8.d + 0x17
            bool cond:64_1 = rax_79 s<= data_143f49cc8:4.d
            data_143f49cc8.d = rax_79
            
            if (not(cond:64_1))
                sub_140594770(&data_143f49cc0)
            
            UnDecorator::getReferenceType(data_143f49cc0, u"AtmosphericFogSunColor", 0x2e)
            data_143f49cd0 = 0
            data_143f49cd8 = 0
            sub_1405947f0(&data_143f49cd0, 0x13)
            int32_t rax_80 = data_143f49cd8.d + 0x13
            bool cond:65_1 = rax_80 s<= data_143f49cd8:4.d
            data_143f49cd8.d = rax_80
            
            if (not(cond:65_1))
                sub_140594770(&data_143f49cd0)
            
            UnDecorator::getReferenceType(data_143f49cd0, u"AmbientCubemapTint", 0x26)
            data_143f49ce0 = 0
            data_143f49ce8 = 0
            sub_1405947f0(&data_143f49ce0, 0x18)
            int32_t rax_81 = data_143f49ce8.d + 0x18
            bool cond:66_1 = rax_81 s<= data_143f49ce8:4.d
            data_143f49ce8.d = rax_81
            
            if (not(cond:66_1))
                sub_140594770(&data_143f49ce0)
            
            UnDecorator::getReferenceType(data_143f49ce0, u"AmbientCubemapIntensity", 0x30)
            data_143f49cf0 = 0
            data_143f49cf8 = 0
            sub_1405947f0(&data_143f49cf0, 0x11)
            int32_t rax_82 = data_143f49cf8.d + 0x11
            bool cond:67_1 = rax_82 s<= data_143f49cf8:4.d
            data_143f49cf8.d = rax_82
            
            if (not(cond:67_1))
                sub_140594770(&data_143f49cf0)
            
            UnDecorator::getReferenceType(data_143f49cf0, u"RenderTargetSize", 0x22)
            data_143f49d00 = 0
            data_143f49d08 = 0
            sub_1405947f0(&data_143f49d00, 0x13)
            int32_t rax_83 = data_143f49d08.d + 0x13
            bool cond:68_1 = rax_83 s<= data_143f49d08:4.d
            data_143f49d08.d = rax_83
            
            if (not(cond:68_1))
                sub_140594770(&data_143f49d00)
            
            UnDecorator::getReferenceType(data_143f49d00, u"SkyLightParameters", 0x26)
            data_143f49d10 = 0
            data_143f49d18 = 0
            sub_1405947f0(&data_143f49d10, 0x1b)
            int32_t rax_84 = data_143f49d18.d + 0x1b
            bool cond:69_1 = rax_84 s<= data_143f49d18:4.d
            data_143f49d18.d = rax_84
            
            if (not(cond:69_1))
                sub_140594770(&data_143f49d10)
            
            UnDecorator::getReferenceType(data_143f49d10, u"SceneFString(TEXTureMinMax", 0x36)
            data_143f49d20 = 0
            data_143f49d28 = 0
            sub_1405947f0(&data_143f49d20, 0xe)
            int32_t rax_85 = data_143f49d28.d + 0xe
            bool cond:70_1 = rax_85 s<= data_143f49d28:4.d
            data_143f49d28.d = rax_85
            
            if (not(cond:70_1))
                sub_140594770(&data_143f49d20)
            
            UnDecorator::getReferenceType(data_143f49d20, u"SkyLightColor", 0x1c)
            data_143f49d30 = 0
            data_143f49d38 = 0
            sub_1405947f0(&data_143f49d30, 0x1c)
            int32_t rax_86 = data_143f49d38.d + 0x1c
            bool cond:71_1 = rax_86 s<= data_143f49d38:4.d
            data_143f49d38.d = rax_86
            
            if (not(cond:71_1))
                sub_140594770(&data_143f49d30)
            
            UnDecorator::getReferenceType(data_143f49d30, u"SkyIrradianceEnvironmentMap", 0x38)
            data_143f49d40 = 0
            data_143f49d48 = 0
            sub_1405947f0(&data_143f49d40, 0x12)
            int32_t rax_87 = data_143f49d48.d + 0x12
            bool cond:72_1 = rax_87 s<= data_143f49d48:4.d
            data_143f49d48.d = rax_87
            
            if (not(cond:72_1))
                sub_140594770(&data_143f49d40)
            
            UnDecorator::getReferenceType(data_143f49d40, u"MobilePreviewMode", 0x24)
            data_143f49d50 = 0
            data_143f49d58 = 0
            sub_1405947f0(&data_143f49d50, 0x14)
            int32_t rax_88 = data_143f49d58.d + 0x14
            bool cond:73_1 = rax_88 s<= data_143f49d58:4.d
            data_143f49d58.d = rax_88
            
            if (not(cond:73_1))
                sub_140594770(&data_143f49d50)
            
            UnDecorator::getReferenceType(data_143f49d50, u"HMDEyePaddingOffset", 0x28)
            data_143f49d60 = 0
            data_143f49d68 = 0
            sub_1405947f0(&data_143f49d60, 0x26)
            int32_t rax_89 = data_143f49d68.d + 0x26
            bool cond:74_1 = rax_89 s<= data_143f49d68:4.d
            data_143f49d68.d = rax_89
            
            if (not(cond:74_1))
                sub_140594770(&data_143f49d60)
            
            UnDecorator::getReferenceType(data_143f49d60, DirectionalLightShadowFString(TEXTure", 
                0x4c)
            data_143f49d70 = 0
            data_143f49d78 = 0
            sub_1405947f0(&data_143f49d70, 0xd)
            int32_t rax_90 = data_143f49d78.d + 0xd
            bool cond:75_1 = rax_90 s<= data_143f49d78:4.d
            data_143f49d78.d = rax_90
            
            if (not(cond:75_1))
                sub_140594770(&data_143f49d70)
            
            UnDecorator::getReferenceType(data_143f49d70, u"SamplerState", 0x1a)
            atexit(sub_142d053f0)
            _Init_thread_footer(&data_143f49d80)
    
    int64_t var_98 = 0
    int32_t var_90_1 = 0
    sub_1405947f0(&var_98, 6)
    int32_t r12_1 = var_90_1 + 6
    
    if (r12_1 s> 0)
        sub_140594770(&var_98)
    
    UnDecorator::getReferenceType(var_98, u"View.", 0xc)
    int16_t* var_88 = nullptr
    int64_t var_80_1 = 0
    sub_1405947f0(&var_88, 7)
    int32_t r14_1 = var_80_1.d + 7
    var_80_1.d = r14_1
    
    if (r14_1 s> 0)
        sub_140594770(&var_88)
        r14_1 = var_80_1.d
    
    int16_t* r13_1 = var_88
    UnDecorator::getReferenceType(r13_1, u"Frame.", 0xe)
    
    do
        int16_t* rdi_1
        int32_t r15_1
        int16_t* var_68
        int32_t var_60
        
        if (r14_1 s> 1)
            int32_t rax_8 = i[1].d
            int32_t rbx_2 = rax_8 - 1
            
            if (rax_8 == 0)
                rbx_2 = 0
            
            int32_t rax_9
            
            if (r14_1 == 0)
                rax_9 = r14_1 + 1
            
            if (r14_1 != 0 || rbx_2 == 0)
                rax_9 = 0
            
            var_88 = nullptr
            sub_140596860(&var_88, r13_1, r14_1, 0, rax_9 + rbx_2)
            sub_140a20ba0(&var_88, *i, rbx_2)
            rdi_1 = var_88
            int32_t rax_11 = var_80_1:4.d
            var_88 = nullptr
            r15_1 = var_80_1.d
            var_60 = r15_1
            var_80_1 = 0
            var_68 = rdi_1
            int32_t var_5c_1 = rax_11
        else
            sub_140596d10(&var_68, i)
            r15_1 = var_60
            rdi_1 = var_68
        int32_t rcx_16
        int16_t* rbx_3
        int16_t* var_58
        int32_t var_50
        
        if (r12_1 s> 1)
            int32_t rax_12 = i[1].d
            int32_t rbx_4 = rax_12 - 1
            
            if (rax_12 == 0)
                rbx_4 = 0
            
            int32_t rax_13
            
            if (r12_1 == 0)
                rax_13 = r12_1 + 1
            
            if (r12_1 != 0 || rbx_4 == 0)
                rax_13 = 0
            
            int64_t rdx_9 = var_98
            int16_t* var_78 = nullptr
            sub_140596860(&var_78, rdx_9, r12_1, 0, rax_13 + rbx_4)
            sub_140a20ba0(&var_78, *i, rbx_4)
            rbx_3 = var_78
            int32_t var_70
            rcx_16 = var_70
            var_78 = nullptr
            var_70.q = 0
            var_58 = rbx_3
            var_50 = rcx_16
            int32_t var_6c
            int32_t var_4c_1 = var_6c
        else
            sub_140596d10(&var_58, i)
            rcx_16 = var_50
            rbx_3 = var_58
        int16_t* const r8_7 = &data_142d40450
        int16_t* rdx_11 = &data_142d40450
        
        if (rcx_16 != 0)
            r8_7 = rbx_3
        
        if (r15_1 != 0)
            rdx_11 = rdi_1
        
        sub_140a306e0(rsi_1, rdx_11, r8_7, 0)
        
        if (rbx_3 != 0)
            sub_140a74f90(rbx_3)
        
        if (rdi_1 != 0)
            sub_140a74f90(rdi_1)
        
        i = &i[2]
    while (i != &data_143f49d80)
    
    if (r13_1 != 0)
        sub_140a74f90(r13_1)
    
    int64_t rax_16 = var_98
    
    if (rax_16 != 0)
        sub_140a74f90(rax_16)

if (sub_140b4e7c0(rcx_1, &data_1439a9478) s< 7)
    sub_140a306e0(rsi_1, u"View.RenderTargetSize", u"View.BufferSizeAndInvSize.xy", 0)

uint64_t result = result_1

if (result == 0)
    return result

return sub_140a74f90(result)
