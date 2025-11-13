// 函数: sub_141ec0d10
// 地址: 0x141ec0d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi

if (((arg1[1].d u>> 4).b & 1) == 0)
    rdi = arg1[4]
else
    rdi = 0

void var_98
memset(&var_98, 0, 0x88)
int32_t var_90 = 0x3f800000
uint64_t result = (*(*arg1 + 0x410))(arg1, rdi, &var_98)

if (result == 0)
    return result

void* rax_3
void* r8_1
rax_3, r8_1 = sub_14255d000()
void* rcx_2 = *(result + 0x10)
int64_t rdx_1 = sx.q(*(rax_3 + 0x38))

if (rdx_1.d s<= *(rcx_2 + 0x38) && *(*(rcx_2 + 0x30) + (rdx_1 << 3)) == rax_3 + 0x30)
    void* rdi_1 = *(result + 0x258)
    
    if (rdi_1 != 0)
        void* rax_5 = sub_14256a090()
        void* rdx_2 = *(rdi_1 + 0x10)
        int64_t rax_6 = sx.q(*(rax_5 + 0x38))
        
        if (rax_6.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
            r8_1.b = 1
            sub_141dbe590(*(result + 0x258), 0, r8_1.b)

r8_1.b = 1
return sub_141dbe590(result, 0, r8_1.b)
