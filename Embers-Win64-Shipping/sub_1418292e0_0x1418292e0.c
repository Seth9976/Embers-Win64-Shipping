// 函数: sub_1418292e0
// 地址: 0x1418292e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x98)
int32_t i_1 = *(arg1 + 0xa0)
int64_t var_38 = 0
int32_t i_2 = i_1

if (i_1 != 0)
    sub_1405a4be0(&var_38, i_1, 0)
    int64_t* rsi_2 = var_38 - rbx
    int32_t i
    
    do
        *(rsi_2 + rbx) = 0
        void* r14_1 = rsi_2 + rbx
        int32_t rdi_1 = *(rbx + 8)
        int64_t r15_1 = *rbx
        *(rsi_2 + rbx + 8) = rdi_1
        
        if (rdi_1 != 0)
            sub_1405a4c70(r14_1, rdi_1, 0)
            memcpy(*r14_1, r15_1, rdi_1 * 2)
        else
            *(rsi_2 + rbx + 0xc) = 0
        
        rbx += 0x10
        i = i_1
        i_1 -= 1
    while (i != 1)
else
    int32_t var_2c_1 = 0

sub_141820470(arg2, &var_38)
sub_140af3c10(data_143ddb400, Portal.BuildPatch", ChunkDbSourcePreFetchMinimum", &arg2[2], 
    &data_143de5780)
sub_140af3c10(data_143ddb400, Portal.BuildPatch", ChunkDbSourcePreFetchMaximum", arg2 + 0x14, 
    &data_143de5780)
int32_t rdx_4 = arg2[2].d
int32_t rcx_6 = 0x3e8
int32_t rax

if (rdx_4 s>= 1)
    rax = 0x3e8
    
    if (rdx_4 s< 0x3e8)
        rax = rdx_4
else
    rax = 1

int32_t rdx_5 = *(arg2 + 0x14)
arg2[2].d = rax

if (rdx_5 s>= rax)
    if (rdx_5 s< 0x3e8)
        rcx_6 = rdx_5
    
    rax = rcx_6

*(arg2 + 0x14) = rax
sub_140af3b00(data_143ddb400, Portal.BuildPatch", ChunkDbSourceChunkDbOpenRetryTime", &arg2[3], 
    &data_143de5780)
float zmm0 = arg2[3].d

if (zmm0 >= 0.5f)
    arg2[3].d = __minss_xmmss_memss(zmm0, 0x42700000)
    return arg2

arg2[3].d = 0x3f000000
return arg2
