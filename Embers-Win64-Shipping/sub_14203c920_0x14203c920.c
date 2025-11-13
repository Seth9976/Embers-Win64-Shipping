// 函数: sub_14203c920
// 地址: 0x14203c920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_1424c7800()
void* rax_1 = rax[0x23]

if (rax_1 == 0)
    int64_t r8_1 = *rax
    (*(r8_1 + 0x390))(rax, arg3, r8_1)
    rax_1 = rax[0x23]

if ((*(rax_1 + 0x38) & 4) != 0)
    sub_140e88cf0(data_143e29f28, arg2 ^ 1, nullptr)

int64_t rbx_1 = 0
void* rcx_2 = nullptr

if (((*(arg1 - 0x20) u>> 4).b & 1) == 0)
    rcx_2 = *(arg1 - 8)

int64_t* rax_4 = sub_1423dd310(rcx_2, arg1 - 0x28)
int64_t* rdi_1 = *rax_4
void* result = &rdi_1[rax_4[1]]
uint64_t rsi_1 = sx.q(rax_4[1].d) << 3 u>> 3

if (rdi_1 u> result)
    rsi_1 = 0

if (rsi_1 != 0)
    do
        int64_t* rcx_4 = *(*rdi_1 + 0x30)
        
        if (rcx_4 != 0)
            int64_t rax_6 = *rcx_4
            
            if (arg2 == 0)
                result = (*(rax_6 + 0xca8))(rcx_4)
            else
                result = (*(rax_6 + 0xcb0))(rcx_4)
        
        rdi_1 = &rdi_1[1]
        rbx_1 += 1
    while (rbx_1 != rsi_1)

return result
