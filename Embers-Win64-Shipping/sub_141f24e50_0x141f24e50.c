// 函数: sub_141f24e50
// 地址: 0x141f24e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = sx.q(arg2)

if (r14.d u> 0x1f)
    return 

int32_t rcx = arg3[1].d

if (rcx s<= 0)
    return 

int32_t rax_1 = rcx + r14.d
int32_t r9_1 = 0x20

if (rax_1 s<= 0x20)
    r9_1 = rax_1

int32_t r12_1 = 0x20 - r14.d

if (rcx s<= r12_1)
    r12_1 = rcx

if (r9_1 s> *(arg1 + 0x230))
    int64_t rbx_1 = sx.q(*(arg1 + 0x230))
    
    if (r9_1 s> rbx_1.d)
        *(arg1 + 0x230) = r9_1
        
        if (r9_1 s> *(arg1 + 0x234))
            sub_1406105e0(arg1 + 0x228)
        
        memset(*(arg1 + 0x228) + (rbx_1 << 2), 0, sx.q(r9_1 - rbx_1.d) << 2)
    else if (r9_1 s< rbx_1.d && r9_1 != rbx_1.d)
        *(arg1 + 0x230) = r9_1
        sub_1405dac90(arg1 + 0x228)

int64_t buffer2 = *arg3
int64_t count = sx.q(r12_1) << 2
int64_t buffer1 = *(arg1 + 0x228) + (r14 << 2)

if (memcmp(buffer1, buffer2, count).d == 0)
    return 

memcpy(buffer1, buffer2, count.d)
void* rax = *(arg1 + 0xa8)

if (rax != 0)
label_141f24f57:
    int64_t* rcx_7 = *(rax + 0x1b0)
    
    if (rcx_7 != 0)
        (*(*rcx_7 + 0x30))(rcx_7, arg1)
else
    rax = sub_141ee69e0(arg1)
    
    if (rax != 0)
        goto label_141f24f57
