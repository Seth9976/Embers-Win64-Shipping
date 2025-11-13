// 函数: sub_140d968c0
// 地址: 0x140d968c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = *arg1

if (*rsi == 0)
    return 

void* rbx_1 = arg1[1]
int32_t* r12_1 = arg1[2]
int64_t rbp_1 = sx.q(*(rbx_1 + 0xa8))
int32_t* r13_1 = arg1[5]
int32_t rax_2 = (rbp_1 + 1).d
int32_t r14_2 = *arg1[3] - *r12_1
int64_t* r15_1 = arg1[4]
*(rbx_1 + 0xa8) = rax_2

if (rax_2 s> *(rbx_1 + 0xac))
    sub_140dbc9f0(rbx_1, rbp_1.d)

void* rax_3 = *(rbx_1 + 0xa0)
void* rdx_2 = r15_1[1]
int64_t r9_1 = *r15_1

if (rax_3 != 0)
    rbx_1 = rax_3

int64_t r8_2 = rbp_1 * 5

if (rdx_2 != 0)
    *(rdx_2 + 8) += 1

int32_t rax_4 = *r12_1
int32_t zmm0 = *r13_1
*(rbx_1 + (r8_2 << 3) + 8) = *rsi
*(rbx_1 + (r8_2 << 3) + 4) = r14_2
*(rbx_1 + (r8_2 << 3)) = rax_4
*(rbx_1 + (r8_2 << 3) + 0x10) = r9_1
*(rbx_1 + (r8_2 << 3) + 0x18) = rdx_2
*(rbx_1 + (r8_2 << 3) + 0x20) = zmm0
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
