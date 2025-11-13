// 函数: sub_1421f3de0
// 地址: 0x1421f3de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_20

if (arg2 == 0)
    sub_140d3a3a0(&arg_20, arg2)
    int64_t rax = arg_20
    *arg3 = rax
    return rax

int64_t* rbx = *(arg2 + 0x18)

if (rbx == 0)
    sub_140d3a3a0(&arg_20, nullptr)
    int64_t rax_1 = arg_20
    *arg3 = rax_1
    return rax_1

int64_t rdx = *(arg1 + 0x5c)
uint64_t rsi = 0
int64_t* arg_10 = nullptr
(*(*rbx + 0x948))(rbx, rdx, &arg_10)
uint64_t rbx_1 = rbx[0x18]
void* rax_3
int64_t rax_4
void* rdx_1

if (rbx_1 != 0)
    rax_3 = sub_142591550()
    rdx_1 = *(rbx_1 + 0x10)
    rax_4 = sx.q(*(rax_3 + 0x38))

if (rbx_1 == 0 || rax_4.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
    rbx_1 = nullptr

int64_t rax_6 = sub_140d3c6e0(&arg3[1])
int64_t r12
r12.b = arg_10 != rax_6
int64_t rax_7

if (rbx_1 != 0)
    rax_7 = sub_140d3c6e0(arg3)

int64_t rbp

if (rbx_1 == 0 || rbx_1 == rax_7)
    rbp.b = 0
else
    rbp.b = 1

uint64_t rax_8 = sub_140d3e110(arg3)

if (rax_8.b == 0 || r12.b != 0 || rbp.b != 0)
    sub_140d3a3a0(&arg_20, nullptr)
    int64_t* rdx_2 = arg_10
    *arg3 = arg_20
    rax_8 = sub_140d3a3a0(&arg3[1], rdx_2)
    int64_t* rbp_1 = arg_10
    
    if (rbp_1 != 0)
        void* rax_10 = sub_142590e60()
        void* rdx_3 = rbp_1[2]
        rax_8 = sx.q(*(rax_10 + 0x38))
        
        if (rax_8.d s> *(rdx_3 + 0x38))
        label_1421f3f45:
            int64_t* r14_1 = arg_10
            
            if (r14_1 != 0)
                int64_t rax_11 = sub_142591550()
                int64_t r8_3 = *r14_1
                rax_8 = (*(r8_3 + 0x610))(r14_1, rax_11, r8_3)
                
                if (rax_8 != 0)
                    rsi = rax_8
        else
            uint64_t rcx_9 = rax_8
            rax_8 = *(rdx_3 + 0x30)
            
            if (*(rax_8 + (rcx_9 << 3)) != rax_10 + 0x30)
                goto label_1421f3f45
            
            rsi = rbp_1[0x46]
    
    if (rbx_1 == 0)
        rbx_1 = rsi
    
    if (rbx_1 != 0)
        sub_140d3a3a0(arg3, rbx_1)
        return sub_1421f8d70(arg1, arg3, rbx_1, sub_1421b85d0(arg1, arg2))

return rax_8
