// 函数: sub_141369580
// 地址: 0x141369580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg1[1]
int32_t rdx_3 = rdi s/ 7
int32_t rdi_1 = rdi s% 7
int32_t rbx_1 = rdx_3 & 0x80000001

if (rbx_1 s< 0)
    rbx_1 = ((rbx_1 - 1) | 0xfffffffe) + 1

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rdx_3)
int32_t temp4
int32_t temp5
temp4:temp5 = sx.q((temp3 - temp2) s>> 1)
int32_t rdx_6 = temp4 & 3
int32_t rax_8 = temp5 + rdx_6
int32_t rcx_1 = rax_8 s>> 2
int32_t rax_10 = (rax_8 & 3) - rdx_6
int32_t rbp_1 = rcx_1 & 0x80000001

if (rbp_1 s< 0)
    rbp_1 = ((rbp_1 - 1) | 0xfffffffe) + 1

int32_t temp6
int32_t temp7
temp6:temp7 = sx.q(rcx_1)
int32_t rsi_1 = (temp7 - temp6) s>> 1 & 0x80000001

if (rsi_1 s< 0)
    rsi_1 = ((rsi_1 - 1) | 0xfffffffe) + 1

if ((((rdi_1 - 1) & 0xfffffffa) == 0 && rdi_1 != 5) || rax_10 == 0)
    if (rdi_1 != 2)
    label_14136963d:
        
        if ((rbp_1 == 1 || rbx_1 == 1) && (rsi_1 != 1 || rbx_1 == rsi_1)
                && (rdi_1 == 2 || rax_10 != 3)
                && (rbx_1 != 1 || rdi_1 u<= 2 || rdi_1 - 5 u<= rbx_1) && (rbp_1 == 1 || rdi_1 == 1)
                && (rsi_1 != 1 || rdi_1 u<= 2))
            return sub_1405fba70(*arg1, 3)
    else if (sub_141355c00(*arg1).b != 0 && rbp_1 == 1 && rbx_1 != rbp_1)
        goto label_14136963d

int32_t result
result.b = 0
return result
