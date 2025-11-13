// 函数: sub_140d97200
// 地址: 0x140d97200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = *arg1

if (*rsi == 0)
    return 

int32_t* rbx_1 = arg1[1]
int32_t* r12_1 = arg1[2]
int64_t rbp_1 = sx.q(rbx_1[0x3a])
int32_t* r13_1 = arg1[5]
int32_t rax_2 = (rbp_1 + 1).d
int32_t r14_2 = *arg1[3] - *r12_1
int64_t* r15_1 = arg1[4]
rbx_1[0x3a] = rax_2

if (rax_2 s> rbx_1[0x3b])
    sub_140dbc7e0(rbx_1, rbp_1.d)

int32_t* rax_3 = *(rbx_1 + 0xe0)
void* r8_1 = r15_1[1]
int64_t r9_1 = *r15_1

if (rax_3 != 0)
    rbx_1 = rax_3

int64_t rdx_2 = rbp_1 * 0x38

if (r8_1 != 0)
    *(r8_1 + 8) += 1

int32_t rax_4 = *r12_1
int32_t zmm0 = *r13_1
*(rbx_1 + rdx_2 + 8) = *rsi
rbx_1[rbp_1 * 0xe + 1] = r14_2
rbx_1[rbp_1 * 0xe] = rax_4
*(rbx_1 + rdx_2 + 0x10) = r9_1
*(rbx_1 + rdx_2 + 0x18) = r8_1
rbx_1[rbp_1 * 0xe + 8] = zmm0
*(rbx_1 + rdx_2 + 0x28) = 0
*(rbx_1 + rdx_2 + 0x30) = 0
**arg1 = 0
int64_t* rax_6 = arg1[4]
void var_38

if (rax_6 != &var_38)
    *rax_6 = 0
    int64_t* rbx_2 = rax_6[1]
    
    if (rbx_2 != 0)
        rax_6[1] = 0
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp1_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)

*arg1[5] = 0x3f800000
