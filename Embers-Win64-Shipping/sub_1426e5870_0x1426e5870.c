// 函数: sub_1426e5870
// 地址: 0x1426e5870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg2
int64_t r9 = *(rax + 0x110)
int64_t r8 = zx.q(*(rax + 0x260)) * 0x58
int32_t* rdi_1 = zx.q(*(arg1 + 0x52)) + *(r8 + r9 + 0x30)
char* rsi_1 = zx.q(*(arg1[9] + 0x52)) + *(r8 + r9 + 0x30)
void* rax_3 = sub_14272ed10()
void* rdx = *(arg1[9] + 0x10)
int64_t rax_4 = sx.q(*(rax_3 + 0x38))
uint64_t result

if (rax_4.d s<= *(rdx + 0x38))
    result = *(rdx + 0x30)

if (rax_4.d s> *(rdx + 0x38) || *(result + (rax_4 << 3)) != rax_3 + 0x30)
    result = zx.q(sx.d(*rsi_1))
    
    if (result.d != zx.d(*(arg1 + 0x59)))
    label_1426e58f6:
        rdi_1[1].b = arg1[0xd].b
        result = (*(*arg1 + 0x150))(arg1)
        rdi_1[2] = *(result + 0x520)
else if (*rsi_1 == 0xff)
    goto label_1426e58f6

rsi_1.b = 0

if (*(arg1 + 0x6c) == 0)
    rdi_1[1].b -= 1
    rsi_1.b = rdi_1[1].b u> 0
else
    if (*(arg2 + 0x34) != *rdi_1)
        void* rax_9
        
        if (not(0f f> arg1[0xe].d))
            rax_9 = (*(*arg1 + 0x150))(arg1)
        
        if (0f f> arg1[0xe].d || not(rdi_1[2] f+ arg1[0xe].d f<= *(rax_9 + 0x520)))
            rsi_1.b = 1
    
    result = zx.q(*(arg2 + 0x34))
    *rdi_1 = result.d

if (rsi_1.b == 0)
    return result

int64_t* rcx_6 = arg1[9]
return (*(*rcx_6 + 0x2b0))(rcx_6, arg2, zx.q(*(arg1 + 0x59)))
