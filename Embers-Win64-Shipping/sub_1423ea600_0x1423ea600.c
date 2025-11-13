// 函数: sub_1423ea600
// 地址: 0x1423ea600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t arg_10 = arg2
uint64_t r9_2 = zx.q(arg2.d) & 0xffffff

if (r9_2.d s>= *(arg1 + 0x10))
    return 

void* rax_1 = *(arg1 + 0x28)
void* r8_1 = arg1 + 0x18

if (rax_1 != 0)
    r8_1 = rax_1

if (not(test_bit(*(r8_1 + (zx.q(r9_2.d) u>> 5 << 2)), r9_2.d & 0x1f)))
    return 

char* rdi_3 = r9_2 * 0x90 + *(arg1 + 8)

if (*(rdi_3 + 0x70) != arg2)
    return 

uint32_t rbp_1 = zx.d(rdi_3[1])

if (((rbp_1 - 2).b & 0xfd) == 0)
    return 

uint32_t rcx_2 = zx.d(rbp_1.b)

if (rbp_1.b == 0)
    sub_1423ebfb0(arg1 + 0xa0, &arg_10)
else if (rcx_2 == 1)
    int64_t* r8_2 = *(arg1 + 0x40)
    int64_t* rcx_4 = r8_2
    void* rdx_2 = &r8_2[sx.q(*(arg1 + 0x48))]
    int32_t rcx_5
    
    if (r8_2 == rdx_2)
    label_1423ea6ce:
        rcx_5 = -1
    else
        while (*rcx_4 != arg2)
            rcx_4 = &rcx_4[1]
            
            if (rcx_4 == rdx_2)
                goto label_1423ea6ce
        
        rcx_5 = ((rcx_4 - r8_2) s>> 3).d
    
    int32_t var_20_1 = *(arg1 + 0x10) - *(arg1 + 0x3c)
    void* var_28 = arg1 + 8
    sub_1423cd290(arg1 + 0x40, rcx_5, &var_28, 0)
else if (rcx_2 == 3)
    *(arg1 + 0x148) = 0

if (rbp_1.b == 3 && (*rdi_3 & 1) == 0)
    return sub_1423ec100(arg1, arg2) __tailcall

void arg_18
sub_1423ccbd0(arg1 + 0x50, &arg_18, &arg_10, nullptr)
rdi_3[1] = 2

if (rbp_1.b != 0)
    *(rdi_3 + 8) = *(rdi_3 + 8) f- *(arg1 + 0x140)
