// 函数: sub_140ac8030
// 地址: 0x140ac8030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg2[1]
int64_t var_58 = *arg2
int64_t* var_50 = rsi

if (rsi != 0)
    rsi[1].d += 1

char* rdi = *(arg1 + 0x10)
EnterCriticalSection(&rdi[0x30])
char rax_1 = sub_140ac86e0(rdi, &var_58, arg3)

if (rdi != -0x30)
    LeaveCriticalSection(&rdi[0x30])

if (rsi != 0)
    rsi[1].d -= 1
    
    if (rsi[1].d == 1)
        (**rsi)(rsi)
        int32_t rax_4 = *(rsi + 0xc)
        *(rsi + 0xc) -= 1
        
        if (rax_4 == 1)
            (*(*rsi + 8))(rsi, 1)

int64_t* rsi_1 = arg2[1]
int64_t var_48 = *arg2
int64_t* var_40 = rsi_1

if (rsi_1 != 0)
    rsi_1[1].d += 1

char* rdi_1 = *(arg1 + 0x20)
EnterCriticalSection(&rdi_1[0x30])
char rax_7 = sub_140ac86e0(rdi_1, &var_48, arg3)

if (rdi_1 != -0x30)
    LeaveCriticalSection(&rdi_1[0x30])

if (rsi_1 != 0)
    rsi_1[1].d -= 1
    
    if (rsi_1[1].d == 1)
        (**rsi_1)(rsi_1)
        int32_t rax_10 = *(rsi_1 + 0xc)
        *(rsi_1 + 0xc) -= 1
        
        if (rax_10 == 1)
            (*(*rsi_1 + 8))(rsi_1, 1)

int64_t* rsi_2 = arg2[1]
int64_t var_38 = *arg2
int64_t* var_30 = rsi_2

if (rsi_2 != 0)
    rsi_2[1].d += 1

char* rdi_3 = *(arg1 + 0x30)
EnterCriticalSection(&rdi_3[0x30])
char rax_13 = sub_140ac86e0(rdi_3, &var_38, arg3)

if (rdi_3 != -0x30)
    LeaveCriticalSection(&rdi_3[0x30])

if (rsi_2 != 0)
    rsi_2[1].d -= 1
    
    if (rsi_2[1].d == 1)
        (**rsi_2)(rsi_2)
        int32_t r14_1 = *(rsi_2 + 0xc)
        *(rsi_2 + 0xc) -= 1
        
        if (r14_1 == 1)
            int64_t r8_4 = *rsi_2
            (*(r8_4 + 8))(rsi_2, zx.q(r14_1), r8_4)

return zx.q(rax_1) & zx.q(rax_7) & zx.q(rax_13)
