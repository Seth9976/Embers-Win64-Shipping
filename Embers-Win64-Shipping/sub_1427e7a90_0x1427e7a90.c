// 函数: sub_1427e7a90
// 地址: 0x1427e7a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

class physx::PxCollection* result = PxCreateCollection()

if (result == 0)
    return result

int64_t rax = *arg1
int64_t arg_18 = 0
int64_t arg_10
arg_10.w = 0x2f
int32_t rax_1 = (*(rax + 0x90))(arg1, &arg_10)
int64_t* var_38 = nullptr
int64_t var_30 = 0
sub_1427e8960(&var_38, rax_1, &arg_18)
uint64_t i_4 = zx.q(var_30.d)
int64_t* r14 = var_38
arg_10.w = 0x2f
(*(*arg1 + 0x98))(arg1, &arg_10, r14, zx.q(i_4.d), 0)

if (i_4.d != 0)
    int64_t* rdi_1 = r14
    uint64_t i
    
    do
        (*(*result + 8))(result, *rdi_1, 0)
        rdi_1 = &rdi_1[1]
        i = i_4
        i_4 -= 1
    while (i != 1)

int32_t rax_4 = var_30:4.d

if ((rax_4 & 0x7fffffff) != 0 && rax_4 s>= 0 && r14 != 0)
    class physx::PxAllocatorCallback* rax_5 = physx::shdfnd::getAllocator()
    int64_t r8_2 = *rax_5
    (*(r8_2 + 0x10))(rax_5, r14, r8_2)

int64_t rax_6 = *arg1
arg_10 = 0
int32_t rax_7 = (*(rax_6 + 0xc0))(arg1)
var_38 = nullptr
int64_t var_30_1 = 0
sub_1427cd0a0(&var_38, rax_7, &arg_10)
uint64_t i_5 = zx.q(var_30_1.d)
int64_t* r14_1 = var_38
(*(*arg1 + 0xc8))(arg1, r14_1, zx.q(i_5.d), 0)

if (i_5.d != 0)
    int64_t* rdi_2 = r14_1
    uint64_t i_1
    
    do
        int64_t* rcx_8 = *rdi_2
        int64_t rax_10 = (*(*rcx_8 + 0x90))(rcx_8, &arg_10)
        
        if (arg_10.d == 0)
            int64_t r9_1 = *result
            (*(r9_1 + 8))(result, rax_10, 0, r9_1)
        
        rdi_2 = &rdi_2[1]
        i_1 = i_5
        i_5 -= 1
    while (i_1 != 1)

int32_t rax_11 = var_30_1:4.d

if ((rax_11 & 0x7fffffff) != 0 && rax_11 s>= 0 && r14_1 != 0)
    class physx::PxAllocatorCallback* rax_12 = physx::shdfnd::getAllocator()
    int64_t r8_5 = *rax_12
    (*(r8_5 + 0x10))(rax_12, r14_1, r8_5)

int64_t rax_13 = *arg1
arg_10 = 0
int32_t rax_14 = (*(rax_13 + 0xb0))(arg1)
var_38 = nullptr
int64_t var_30_2 = 0
sub_1427e8aa0(&var_38, rax_14, &arg_10)
uint64_t i_6 = zx.q(var_30_2.d)
int64_t* r14_2 = var_38
(*(*arg1 + 0xb8))(arg1, r14_2, zx.q(i_6.d), 0)

if (i_6.d != 0)
    int64_t* rdi_3 = r14_2
    uint64_t i_2
    
    do
        (*(*result + 8))(result, *rdi_3, 0)
        rdi_3 = &rdi_3[1]
        i_2 = i_6
        i_6 -= 1
    while (i_2 != 1)

int32_t rax_17 = var_30_2:4.d

if ((rax_17 & 0x7fffffff) != 0 && rax_17 s>= 0 && r14_2 != 0)
    class physx::PxAllocatorCallback* rax_18 = physx::shdfnd::getAllocator()
    int64_t r8_8 = *rax_18
    (*(r8_8 + 0x10))(rax_18, r14_2, r8_8)

int64_t rax_19 = *arg1
arg_10 = 0
int32_t rax_20 = (*(rax_19 + 0xd0))(arg1)
var_38 = nullptr
int64_t var_30_3 = 0
sub_1427e8a00(&var_38, rax_20, &arg_10)
uint64_t i_7 = zx.q(var_30_3.d)
int64_t* r14_3 = var_38
(*(*arg1 + 0xd8))(arg1, r14_3, zx.q(i_7.d), 0)

if (i_7.d != 0)
    int64_t* rdi_4 = r14_3
    uint64_t i_3
    
    do
        (*(*result + 8))(result, *rdi_4, 0)
        rdi_4 = &rdi_4[1]
        i_3 = i_7
        i_7 -= 1
    while (i_3 != 1)

int32_t rax_23 = var_30_3:4.d

if ((rax_23 & 0x7fffffff) != 0 && rax_23 s>= 0 && r14_3 != 0)
    class physx::PxAllocatorCallback* rax_24 = physx::shdfnd::getAllocator()
    int64_t r8_11 = *rax_24
    (*(r8_11 + 0x10))(rax_24, r14_3, r8_11)

return result
