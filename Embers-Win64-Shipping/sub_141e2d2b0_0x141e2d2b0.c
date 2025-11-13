// 函数: sub_141e2d2b0
// 地址: 0x141e2d2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = arg1[1]
int128_t zmm6 = arg2

if (rdx == 0)
    return 

int32_t rax_1 = arg1[2].d
int32_t rcx

if (rax_1 s>= 0)
    rcx = *(rdx + 0x160) - 1
    
    if (rax_1 s< rcx)
        rcx = rax_1
else
    rcx = 0

char rax_2 = *(arg1 + 0x19)
char r9_1 = arg1[3].b
arg1[2].d = rcx

if (rax_2 != r9_1)
    zmm6 = 0xbf800000
    uint32_t r8_1 = zx.d(rax_2)
    
    if (rax_2 == 0)
        zmm6 = *(arg1 + 0x24)
    else if (r8_1 == 1)
        zmm6.d = (*(arg1 + 0x24)).d f+ *(arg1 + 0x1c)
    else if (r8_1 == 2)
        zmm6.d = (*(arg1 + 0x24)).d f* arg1[4].d
        zmm6.d = zmm6.d f+ *(arg1 + 0x1c)
    
    *(arg1 + 0x19) = r9_1
    
    if (r9_1 == 0)
        *(arg1 + 0x24) = zmm6.d
    else
        uint32_t r8_3 = zx.d(r9_1)
        
        if (r8_3 == 1)
            *(arg1 + 0x24) = zmm6.d f- *(arg1 + 0x1c)
        else if (r8_3 == 2)
            arg2 = arg1[4].d
            
            if (arg2.d f== 0f)
                *(arg1 + 0x24) = (zx.o(0)).d
            else
                *(arg1 + 0x24) = (zmm6.d f- *(arg1 + 0x1c)) f/ arg2.d

void* rdi_1 = *(rdx + 0x158) + sx.q(rcx) * 0x18
int32_t rax
int128_t zmm6_1
rax, zmm6_1 = sub_141deca00(rdi_1 + 8, zmm6.d)
*(arg1 + 0x14) = rax

if (rax != 0xffffffff)
    int64_t* rcx_6 = (sx.q(rax) << 5) + *(rdi_1 + 8)
    arg1[5] = *rcx_6
    *(arg1 + 0x1c) = rcx_6[1].d
    int32_t zmm0_1
    int512_t zmm1
    zmm0_1, zmm1 = sub_141debb60(rcx_6)
    zmm1.o = zmm6_1
    arg1[4].d = zmm0_1
    jump(*(*arg1 + 8))

if (arg1[5] == 0)
    *(arg1 + 0x24) = zmm6_1.d
    sub_141e18190(arg1)
