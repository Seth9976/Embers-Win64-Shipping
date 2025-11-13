// 函数: sub_141d73b80
// 地址: 0x141d73b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = 0
arg1[2] = 0
*arg1 = &data_1432320c8
arg1[3] = arg3
arg1[4].b = 0
arg1[5] = 0
arg1[6] = 0
*(arg1 + 0x3c) = arg5
arg1[8].d = arg6
arg1[9] = arg7
arg1[0xa].b = arg8
arg1[7].b = arg4
int64_t* rcx = data_143db18d0

if (rcx == 0)
    sub_140a53c40()
    rcx = data_143db18d0

arg3.b = 1
int64_t rax_5
int64_t r8
rax_5, r8 = (*(*rcx + 0xb0))(rcx, u"r.BufferVisualizationDumpFrames", arg3)
arg1[0xb] = rax_5
int64_t* rcx_1 = data_143db18d0

if (rcx_1 == 0)
    sub_140a53c40()
    rcx_1 = data_143db18d0

r8.b = 1
int64_t rax_7
int64_t r8_1
rax_7, r8_1 = (*(*rcx_1 + 0xb0))(rcx_1, u"r.BufferVisualizationDumpFramesAsHDR", r8)
arg1[0xc] = rax_7
int64_t* rcx_2 = data_143db18d0

if (rcx_2 == 0)
    sub_140a53c40()
    rcx_2 = data_143db18d0

r8_1.b = 1
int64_t rax_9
int64_t r8_2
rax_9, r8_2 = (*(*rcx_2 + 0xb0))(rcx_2, u"r.SaveEXR.CompressionQuality", r8_1)
arg1[0xd] = rax_9
int64_t* rcx_3 = data_143db18d0

if (rcx_3 == 0)
    sub_140a53c40()
    rcx_3 = data_143db18d0

r8_2.b = 1
int64_t rax_11
int64_t r8_3
rax_11, r8_3 = (*(*rcx_3 + 0xb0))(rcx_3, u"r.HDR.Display.ColorGamut", r8_2)
arg1[0xe] = rax_11
int64_t* rcx_4 = data_143db18d0

if (rcx_4 == 0)
    sub_140a53c40()
    rcx_4 = data_143db18d0

r8_3.b = 1
int64_t rax_13 = (*(*rcx_4 + 0xb0))(rcx_4, u"r.HDR.Display.OutputDevice", r8_3)
int64_t* rcx_5 = arg1[0xc]
arg1[0xf] = rax_13
int32_t rax_15 = (*(*rcx_5 + 0x90))(rcx_5)
int64_t* rcx_6 = arg1[0xd]
arg1[0x10].d = rax_15
int32_t rax_17 = (*(*rcx_6 + 0x90))(rcx_6)
int64_t* rcx_7 = arg1[0xe]
*(arg1 + 0x84) = rax_17
int32_t rax_19 = (*(*rcx_7 + 0x90))(rcx_7)
int64_t* rcx_8 = arg1[0xf]
arg1[0x11].d = rax_19
int32_t rax_21 = (*(*rcx_8 + 0x90))(rcx_8)
uint64_t r8_4 = zx.q(arg1[8].d)
int64_t* rbx = arg1[0xe]
int16_t* var_18
int64_t* rcx_9 = &var_18
*(arg1 + 0x8c) = rax_21
int16_t* const rdx_1
int32_t var_10

if (r8_4.d != 5)
    sub_140a2e390(rcx_9, u"%d", r8_4)
    rdx_1 = &data_142d40450
    
    if (var_10 != 0)
        rdx_1 = var_18
else
    sub_140a2e390(rcx_9, u"%d", 1)
    int16_t* const rsi_1 = &data_142d40450
    int16_t* const rdx = &data_142d40450
    
    if (var_10 != 0)
        rdx = var_18
    
    (*(*rbx + 0x80))(rbx, rdx, 0x8000000)
    int16_t* rcx_11 = var_18
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    rbx = arg1[0xf]
    sub_140a2e390(&var_18, u"%d", 7)
    
    if (var_10 != 0)
        rsi_1 = var_18
    
    rdx_1 = rsi_1
(*(*rbx + 0x80))(rbx, rdx_1, 0x8000000)
int16_t* rcx_14 = var_18

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

sub_141d77d20(arg1, 0)
return arg1
