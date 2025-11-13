// 函数: sub_140bab1d0
// 地址: 0x140bab1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&arg1[1])
void var_38

if (&arg1[6] != &var_38)
    arg1[6] = 0
    int64_t* rdi_1 = arg1[7]
    
    if (rdi_1 != 0)
        arg1[7] = 0
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp2_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

int32_t i_1 = arg1[9].d
void* rsi = arg1[8]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rdi_2 = *(rsi + 0x18)
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp5_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
        
        int64_t rcx_5 = *rsi
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        rsi += 0x20
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[9].d = 0

if (*(arg1 + 0x4c) != 0)
    sub_1405a51b0(&arg1[8], 0)

char* rax_5 = sub_140a752e0()
int64_t* rdi_3 = *(rax_5 + 0x30)

if (rdi_3 != 0)
    rdi_3[1].d += 1

int64_t* rax_6 = sub_140903440(*(rax_5 + 0x28))
int64_t var_58 = 0
int32_t rsi_1 = rax_6[1].d
int64_t rbp = *rax_6
int32_t var_50 = rsi_1

if (rsi_1 != 0)
    sub_1405a4c70(&var_58, rsi_1, 0)
    memcpy(var_58, rbp, rsi_1 * 2)
else
    int32_t var_4c_1 = 0

if (rdi_3 != 0)
    rdi_3[1].d -= 1
    
    if (rdi_3[1].d == 1)
        (**rdi_3)(rdi_3)
        int32_t rsi_2 = *(rdi_3 + 0xc)
        *(rdi_3 + 0xc) -= 1
        
        if (rsi_2 == 1)
            (*(*rdi_3 + 8))(rdi_3, zx.q(rsi_2))

void var_48
int64_t* rax_10 = sub_140ba7920(arg1, &var_48, &var_58)

if (&arg1[6] != rax_10)
    arg1[6] = *rax_10
    *rax_10 = 0
    int64_t rcx_14 = rax_10[1]
    int64_t* rdi_4 = arg1[7]
    
    if (rcx_14 != rdi_4)
        rax_10[1] = 0
        arg1[7] = rcx_14
        
        if (rdi_4 != 0)
            rdi_4[1].d -= 1
            
            if (rdi_4[1].d == 1)
                (**rdi_4)(rdi_4)
                int32_t temp9_1 = *(rdi_4 + 0xc)
                *(rdi_4 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    (*(*rdi_4 + 8))(rdi_4, 1)

int64_t* var_40

if (var_40 != 0)
    var_40[1].d -= 1
    
    if (var_40[1].d == 1)
        (**var_40)(var_40)
        int32_t temp7_1 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*var_40 + 8))(var_40, 1)

CRITICAL_SECTION* lpCriticalSection = arg1[6]

if (lpCriticalSection != 0)
    EnterCriticalSection(lpCriticalSection)
    sub_140b9dfd0(lpCriticalSection)
    
    if (lpCriticalSection != 0)
        LeaveCriticalSection(lpCriticalSection)

int64_t result = sub_140b9e310(arg1)
int64_t rcx_23 = var_58

if (rcx_23 != 0)
    result = sub_140a74f90(rcx_23)

if (arg1 == -8)
    return result

return LeaveCriticalSection(&arg1[1])
