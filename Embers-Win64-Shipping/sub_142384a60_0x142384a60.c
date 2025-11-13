// 函数: sub_142384a60
// 地址: 0x142384a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = j_sub_140a82f30(0x58)
int64_t* rdi = rax

if (rax == 0)
    rdi = nullptr
else
    int64_t* rbx_1 = arg4[1]
    int64_t r15_1 = *arg4
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    rax[4] = 0
    rax[5].d = 0
    sub_1407473e0(&rax[4], arg2)
    rdi[6] = 0
    rdi[7].d = 0
    sub_1407473e0(&rdi[6], arg3)
    rdi[8] = r15_1
    rdi[9] = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    rdi[0xa].d = data_143a2ff9c
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

EnterCriticalSection(arg1 + 0x68)
uint32_t rcx_6 = (*arg4 u>> 4).d
int32_t r8_1 = (0x9e3779b9 - rcx_6) ^ rcx_6 << 8
int32_t rdx_4 = neg.d(r8_1 + rcx_6) ^ r8_1 u>> 0xd
int32_t rcx_9 = (rcx_6 - r8_1 - rdx_4) ^ rdx_4 u>> 0xc
int32_t r8_4 = (r8_1 - rcx_9 - rdx_4) ^ rcx_9 << 0x10
int32_t rdx_7 = (rdx_4 - r8_4 - rcx_9) ^ r8_4 u>> 5
int32_t rcx_12 = (rcx_9 - r8_4 - rdx_7) ^ rdx_7 u>> 3
int32_t r8_7 = (r8_4 - rcx_12 - rdx_7) ^ rcx_12 << 0xa
void** rax_18 = sub_14237b2a0(arg1 + 0x18, (rdx_7 - r8_7 - rcx_12) ^ r8_7 u>> 0xf, arg4)
void* rax_19 = *(arg1 + 0x10)

if (rax_19 == 0)
    *(arg1 + 0x10) = rdi
    *(arg1 + 8) = rdi
    *rdi = 0
    rdi[1] = 0
else
    *(rax_19 + 8) = rdi
    *rdi = *(arg1 + 0x10)
    rdi[1] = 0
    *(arg1 + 0x10) = rdi

void* result = rax_18[1]

if (result == 0)
    rax_18[1] = rdi
    *rax_18 = rdi
    rdi[2] = 0
    rdi[3] = 0
else
    *(result + 0x18) = rdi
    result = rax_18[1]
    rdi[2] = result
    rdi[3] = 0
    rax_18[1] = rdi

if (arg1 != -0x68)
    result = LeaveCriticalSection(arg1 + 0x68)

int64_t* rbx_3 = arg4[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t temp3_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp3_1 == 1)
            jump(*(*rbx_3 + 8))

return result
