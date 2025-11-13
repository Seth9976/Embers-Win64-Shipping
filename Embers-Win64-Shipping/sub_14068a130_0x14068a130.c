// 函数: sub_14068a130
// 地址: 0x14068a130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *arg4
void* rbx = arg1

if (rdx == 0)
    int64_t result
    result.b = 0
    return result

void* r12 = rbx
void* r13 = rbx
int64_t r15
r15.b = 0

if (test_bit(arg5, 0xe) && rbx != arg2)
    rbx += 1

int32_t rax = *(rdx + 0x20)
int32_t rcx = *(rdx + 0x28)
void* var_110
__builtin_memset(&var_110, 0, 0x38)
void* var_d0
__builtin_memset(&var_d0, 0, 0x50)
char var_58 = 0
char* var_78 = arg2
void* var_70 = rbx
void* var_68 = rdx
int32_t var_60 = rax
int32_t var_54 = rcx

if ((*(rdx + 0xc) & 8) != 0)
    char var_50_1 = 1

if ((*(rdx + 0xc) & 8) == 0 || (arg5.b & 0x10) != 0)
    char var_50_2 = 0

void* var_48 = &arg4[1]
uint64_t rdx_1 = zx.q(*(rdx + 0x24))
int128_t var_98

if (rdx_1 != 0)
    sub_14068b180(&var_98, rdx_1)

void var_118

if (sub_140689c50(&var_118, arg3, 0) != 0)
label_14068a2dc:
    r15.b = 1
    
    if (arg3 != 0)
        bool cond:0_1 = r13 != arg3[6]
        *arg3 = arg6
        int64_t rax_10
        rax_10.b = cond:0_1
        arg3[5] = r12
        arg3[7].b = rax_10.b
else if (rbx != arg2 && (arg5.b & 0x40) == 0)
    int32_t var_5c_1 = (arg5 & 0xffffdfff) | 0x100
    char* rax_6 = sub_1406af510(&var_118, rbx + 1, arg2, nullptr)
    char* rbx_1 = rax_6
    
    if (rax_6 != arg2)
        char* rax_8
        
        do
            char* var_70_1 = rbx_1
            
            if (sub_140689c50(&var_118, arg3, 0) != 0)
                goto label_14068a2dc
            
            rax_8 = sub_1406af510(&var_118, &rbx_1[1], arg2, nullptr)
            rbx_1 = rax_8
        while (rax_8 != arg2)
    
    char* var_70_2 = arg2
    
    if (sub_140689c50(&var_118, arg3, 0) != 0)
        goto label_14068a2dc

void* rcx_7 = var_98.q

if (rcx_7 == 0)
    goto label_14068a361

void* rax_11 = rcx_7
int64_t var_88

if (((var_88 - rcx_7) & 0xfffffffffffffff0) u< 0x1000)
label_14068a34a:
    j_sub_140a74f90(rcx_7)
    __builtin_memset(&var_98, 0, 0x18)
label_14068a361:
    int128_t var_b8
    void* rcx_8 = var_b8:8.q
    
    if (rcx_8 == 0)
        goto label_14068a3ab
    
    void* rax_14 = rcx_8
    int128_t var_a8
    
    if (((var_a8:8.q - rcx_8) & 0xfffffffffffffff0) u< 0x1000)
    label_14068a39a:
        j_sub_140a74f90(rcx_8)
        __builtin_memset(&var_b8:8, 0, 0x18)
    label_14068a3ab:
        void* rcx_9 = var_d0
        
        if (rcx_9 == 0)
            goto label_14068a3f9
        
        void* rax_17 = rcx_9
        int128_t var_c8
        
        if (((var_c8:8.q - rcx_9) & 0xfffffffffffffffc) u< 0x1000)
        label_14068a3e6:
            j_sub_140a74f90(rcx_9)
            int64_t var_d0_1
            __builtin_memset(&var_d0_1, 0, 0x18)
        label_14068a3f9:
            int128_t var_f8
            void* rcx_10 = var_f8:8.q
            
            if (rcx_10 == 0)
                goto label_14068a443
            
            void* rax_20 = rcx_10
            int128_t var_e8
            
            if (((var_e8:8.q - rcx_10) & 0xfffffffffffffff0) u< 0x1000)
            label_14068a430:
                j_sub_140a74f90(rcx_10)
                __builtin_memset(&var_f8:8, 0, 0x18)
            label_14068a443:
                void* rcx_11 = var_110
                
                if (rcx_11 == 0)
                    return zx.q(r15.b)
                
                void* rax_23 = rcx_11
                int128_t var_108
                
                if (((var_108:8.q - rcx_11) & 0xfffffffffffffffc) u< 0x1000)
                    j_sub_140a74f90(rcx_11)
                    return zx.q(r15.b)
                
                rcx_11 = *(rcx_11 - 8)
                
                if (rax_23 - rcx_11 - 8 u<= 0x1f)
                    j_sub_140a74f90(rcx_11)
                    return zx.q(r15.b)
            else
                rcx_10 = *(rcx_10 - 8)
                
                if (rax_20 - rcx_10 - 8 u<= 0x1f)
                    goto label_14068a430
        else
            rcx_9 = *(rcx_9 - 8)
            
            if (rax_17 - rcx_9 - 8 u<= 0x1f)
                goto label_14068a3e6
    else
        rcx_8 = *(rcx_8 - 8)
        
        if (rax_14 - rcx_8 - 8 u<= 0x1f)
            goto label_14068a39a
else
    rcx_7 = *(rcx_7 - 8)
    
    if (rax_11 - rcx_7 - 8 u<= 0x1f)
        goto label_14068a34a

_invalid_parameter_noinfo_noreturn()
noreturn
