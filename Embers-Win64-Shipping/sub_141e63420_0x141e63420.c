// 函数: sub_141e63420
// 地址: 0x141e63420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r14 = 0
int64_t* rsi = arg1
int32_t rdi = 0
void* rcx = arg1[0xc]
int32_t r15 = 0
uint64_t var_48 = 0
int32_t var_3c = 0
int64_t* var_38 = nullptr
int32_t var_30 = 0

if (rcx != 0)
    sub_14238e610(rcx, &var_38)
    int64_t* rbx_1 = var_38
    void* r13_1 = &rbx_1[sx.q(var_30)]
    
    if (rbx_1 != r13_1)
        do
            void* rbp_1 = *rbx_1
            
            if (rbp_1 != 0)
                void* rax_2 = sub_140bdf2e0()
                void* rdx_2 = *(rbp_1 + 0x10)
                int64_t rax_3 = sx.q(*(rax_2 + 0x38))
                
                if (rax_3.d s<= *(rdx_2 + 0x38)
                        && *(*(rdx_2 + 0x30) + (rax_3 << 3)) == rax_2 + 0x30)
                    int64_t rsi_1 = sx.q(rdi)
                    rdi = (rsi_1 + 1).d
                    
                    if (rdi s> r15)
                        sub_1405a4d70(&var_48)
                        r15 = var_3c
                        r14 = var_48
                    
                    *(r14 + (rsi_1 << 3)) = rbp_1
            
            rbx_1 = &rbx_1[1]
        while (rbx_1 != r13_1)
        
        rsi = arg1

if (&arg1[0xc] != &var_48)
    arg1[0xc] = 0
    int64_t* rbx_2 = arg1[0xd]
    
    if (rbx_2 != 0)
        arg1[0xd] = 0
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp1_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)

(*(*rsi + 0x278))(rsi)
var_48 = 0
int32_t var_3c_1 = 0
int32_t var_40_2 = rdi

if (rdi != 0)
    sub_1405c4a00(&var_48, rdi, 0)
    memcpy(var_48, r14, rdi << 3)

int64_t result = sub_1405a9f90(&rsi[0xf], &var_48)
uint64_t rcx_9 = var_48

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

int64_t* rcx_10 = var_38

if (rcx_10 != 0)
    result = sub_140a74f90(rcx_10)

if (r14 == 0)
    return result

return sub_140a74f90(r14)
