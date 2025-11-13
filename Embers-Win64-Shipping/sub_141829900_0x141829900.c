// 函数: sub_141829900
// 地址: 0x141829900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memcpy(&arg2[6], "333333…", 0x11)
int32_t rbx = 0x64
__builtin_memcpy(arg2, 
    "\x64\x00\x00\x00\x08\x00\x00\x00\x08\x00\x00\x00\x08\x00\x00\x00\x04\x00\x00\x00", 0x14)
int32_t rsi = 0x10
arg2[0xb] = 0x10
arg2[0xc] = 8
sub_140af3c10(data_143ddb400, u"Portal.BuildPatch", u"ChunkDownloads", &arg2[0xb], &data_143de5780)
int32_t rax = arg2[0xb]

if (rax u< 1)
    rbx = 1
else if (rax u< 0x64)
    rbx = rax

arg2[0xb] = rbx
void* rcx_1 = data_143ddb400
char arg_10 = 0

if (sub_140af2fd0(rcx_1, Portal.BuildPatch", ChunkDownloadsDisableConnectionScaling", &arg_10, 
        &data_143de5780) != 0 && arg_10 != 0)
    arg2[0xa].b = 1

void* rcx_2 = data_143ddb400
int32_t rbx_1 = *arg2
int32_t arg_18 = 0

if (sub_140af3c10(rcx_2, u"HTTP", u"HttpMaxConnectionsPerServer", &arg_18, &data_143de5780) != 0)
    int32_t rax_3 = arg_18
    rsi = rbx_1
    
    if (rax_3 != 0)
        rsi = rax_3

int32_t rbx_2 = arg2[1]
sub_140af3c10(data_143ddb400, Portal.BuildPatch", ChunkDownloadsLowerLimit", &arg2[1], 
    &data_143de5780)
int32_t rdx = arg2[1]
int32_t rcx_4 = rsi - 2
int32_t rbp = 0x20
int32_t rax_4 = rcx_4

if (rcx_4 u>= 0x20)
    rax_4 = 0x20

if (rbx_2 u<= rcx_4)
    rcx_4 = rbx_2

if (rdx u>= rcx_4)
    if (rdx u< rax_4)
        rax_4 = rdx
    
    rcx_4 = rax_4

arg2[1] = rcx_4
sub_140af3c10(data_143ddb400, Portal.BuildPatch", ChunkDownloadsUpperLimit", arg2, &data_143de5780)
int32_t rcx_6 = *arg2
int32_t rax_6 = arg2[1] + 2

if (rcx_6 u>= rax_6)
    if (rcx_6 u< rsi)
        rsi = rcx_6
    
    rax_6 = rsi

*arg2 = rax_6
sub_140af3c10(data_143ddb400, Portal.BuildPatch", ChunkDownloadsSlowdownHysteresis", &arg2[2], 
    &data_143de5780)
int32_t rcx_8 = arg2[2]
int32_t rbx_3 = 0x100
int32_t rax_7

if (rcx_8 u>= 1)
    rax_7 = 0x100
    
    if (rcx_8 u< 0x100)
        rax_7 = rcx_8
else
    rax_7 = 1

arg2[2] = rax_7
sub_140af3c10(data_143ddb400, Portal.BuildPatch", ChunkDownloadsSpeedupHysteresis", &arg2[4], 
    &data_143de5780)
int32_t rcx_10 = arg2[4]
int32_t rax_8

if (rcx_10 u>= 1)
    rax_8 = 0x100
    
    if (rcx_10 u< 0x100)
        rax_8 = rcx_10
else
    rax_8 = 1

arg2[4] = rax_8
sub_140af3a30(data_143ddb400, Portal.BuildPatch", ChunkDownloadsLowBandwidthFactor", &arg2[8], 
    &data_143de5780)
int64_t zmm0 = *(arg2 + 0x20)
int64_t zmm1 = 0x3fc999999999999a

if (not(zmm0 f< zmm1))
    zmm1 = __minsd_xmmsd_memsd(zmm0, 0x3fe999999999999a)

*(arg2 + 0x20) = zmm1
sub_140af3a30(data_143ddb400, Portal.BuildPatch", ChunkDownloadsHighBandwidthFactor", &arg2[6], 
    &data_143de5780)
double zmm0_1 = *(arg2 + 0x20) + 0.10000000000000001
double zmm1_1 = *(arg2 + 0x18)

if (not(zmm1_1 < zmm0_1))
    zmm0_1 = __minsd_xmmsd_memsd(zmm1_1, 0x3ff0000000000000)

*(arg2 + 0x18) = zmm0_1
sub_140af3c10(data_143ddb400, Portal.BuildPatch", ChunkDownloadsAverageMinCount", &arg2[3], 
    &data_143de5780)
int32_t rax_9 = arg2[3]

if (rax_9 u< 1)
    rbp = 1
else if (rax_9 u< 0x20)
    rbp = rax_9

arg2[3] = rbp
sub_140af3c10(data_143ddb400, Portal.BuildPatch", ChunkDownloadsHealthHysteresis", &arg2[0xc], 
    &data_143de5780)
int32_t rax_10 = arg2[0xc]

if (rax_10 u>= 1)
    if (rax_10 u< 0x100)
        rbx_3 = rax_10
    
    arg2[0xc] = rbx_3
else
    arg2[0xc] = 1

return arg2
