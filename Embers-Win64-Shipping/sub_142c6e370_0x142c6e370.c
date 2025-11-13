// 函数: sub_142c6e370
// 地址: 0x142c6e370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = *arg1
int64_t arg_18 = 0
int64_t arg_8 = 0
void* const rax
int64_t rdx

if (arg2 == 0)
    rdx = arg1[0x3e]
    rax = 0x478
    arg1[0x3f]
else
    rdx = arg1[0x2d]
    rax = 0x460
    arg1[0x2e]

void* r14 = rax + arg1
char* rax_1
int512_t zmm2
rax_1, zmm2 = sub_142c563e0("%s:%s", rdx, arg3)

if (rax_1 == 0)
    return zx.q((&rax_1[0x1b]).d)

int64_t r8_2 = -1

do
    r8_2 += 1
while (rax_1[r8_2] != 0)

int32_t rax_3
int512_t zmm2_1
rax_3, zmm2_1 = sub_142c75c90(rdi, rax_1, r8_2, &arg_8, zmm2, &arg_18)
int32_t rdi_1 = rax_3

if (rax_3 == 0)
    if (arg_8 != 0)
        data_143ccb8a0(*r14)
        void* const rdx_2 = &data_1434cce10
        
        if (arg2 != 0)
            rdx_2 = "Proxy-"
        
        int64_t rax_4 = sub_142c563e0("%sAuthorization: Basic %s\r\n", rdx_2, zmm2_1)
        int64_t rcx_2 = arg_8
        *r14 = rax_4
        data_143ccb8a0(rcx_2)
        
        if (*r14 == 0)
            rdi_1 = 0x1b
    else
        rdi_1 = rax_3 + 9

data_143ccb8a0(rax_1)
return zx.q(rdi_1)
