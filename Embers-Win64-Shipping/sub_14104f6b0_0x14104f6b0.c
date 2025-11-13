// 函数: sub_14104f6b0
// 地址: 0x14104f6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
void* rsi = arg3
int32_t rdx = *(rsi + 0x3c)
int128_t var_98
int128_t* var_140 = &var_98
int32_t var_74 = (1 << (data_1439c7a34).b) - 1
int32_t rax_5 = *(rsi + 0x40)
int32_t var_150 = 1
var_98 = zx.o(0)
int32_t var_88 = 1
int128_t var_84 = data_143dbb1e0
char var_70 = 0
int64_t var_68 = 0
int32_t var_60 = 0
void*** i_1 = sub_141039bd0(arg1, nullptr, arg5, arg6, 1, 0, 0)
int32_t j_4 = *(rsi + 0x34)
void*** i = i_1
int32_t j_3 = *(i_1 + 0x34)
uint64_t j_1 = zx.q(j_3)

if (j_4 u<= j_3)
    j_1 = zx.q(j_4)

int32_t r12 = j_4 - j_1.d
int32_t j_2 = j_1.d
int32_t rax_6 = j_3 - j_1.d
int32_t var_138 = r12

while (i != 0)
    void* r13_1 = *(rsi + 0x70)
    void* rax_8 = i[0x18]
    void* rdi_2 = **(r13_1 + 0x6d8) + 0x1c0
    int32_t rcx_2 = *(rax_8 + 0xf0)
    sub_1410129f0(rdi_2, rax_8, rcx_2, 0x400, 0xffffffff)
    void* rax_9 = *(rsi + 0xc0)
    int32_t rcx_4 = *(rax_9 + 0xf0)
    sub_1410129f0(rdi_2, rax_9, rcx_4, 0x800, 0xffffffff)
    void* rbx_1 = *(rdi_2 + 8)
    int32_t rdx_3 = *(rbx_1 + 0x128)
    int64_t* rcx_6 = *(rbx_1 + 0x30)
    
    if (rdx_3 != 0)
        (*(*rcx_6 + 0xd0))(rcx_6, rdx_3, *(rbx_1 + 0x120))
        *(rbx_1 + 0x128) = 0
    
    if (j_1.d != 0)
        int32_t rbx_2 = r12
        uint64_t j
        
        do
            char var_168
            var_168.q = 0
            char var_170
            int64_t var_f8
            var_170.q = &var_f8
            int32_t var_178_3 = 0
            int32_t var_b8_1 = rax_6 - var_138 + rbx_2
            void* rax_13 = *(rsi + 0xc0)
            int32_t var_c0_1 = 0
            int64_t var_c8 = i[0x18][4]
            int64_t* rax_14 = *(r13_1 + 0x6d8)
            int32_t var_f0_1 = 0
            var_f8 = *(rax_13 + 0x20)
            void* rcx_9 = *rax_14
            *(rcx_9 + 0x3b90) += 1
            int64_t* rcx_10 = *(*(rdi_2 + 8) + 0x30)
            (*(*rcx_10 + 0x80))(rcx_10, &var_c8, 0, 0, var_178_3, var_170, var_168, rdx, arg4, 
                var_150, rax_5, var_140, var_138, j_2, rcx_2, rax_9, rax_8, arg7, i_1, arg2, 
                var_f8, var_f0_1, rbx_2)
            void* rdx_5 = i[0x18]
            char rax_17 = data_1439b4ad4
            void* rcx_11 = *(rdx_5 + 0x28)
            
            if (rcx_11 == 0)
                if (rax_17 != 0 && *(rdx_5 + 0x38) != 0)
                    sub_141026da0(*(*(rdi_2 + 8) + 0x118), rdx_5 + 0x30)
                    rax_17 = data_1439b4ad4
            else if (rax_17 != 0 && *(rcx_11 + 0x30) != 0)
                sub_141026da0(*(*(rdi_2 + 8) + 0x118), rcx_11 + 0x28)
                rax_17 = data_1439b4ad4
            
            void* rdx_7 = *(rsi + 0xc0)
            void* rcx_14 = *(rdx_7 + 0x28)
            
            if (rcx_14 == 0)
                if (rax_17 != 0 && *(rdx_7 + 0x38) != 0)
                    sub_141026da0(*(*(rdi_2 + 8) + 0x118), rdx_7 + 0x30)
            else if (rax_17 != 0 && *(rcx_14 + 0x30) != 0)
                sub_141026da0(*(*(rdi_2 + 8) + 0x118), rcx_14 + 0x28)
            
            rbx_2 += 1
            j = j_1
            j_1 -= 1
        while (j != 1)
        j_1 = zx.q(j_2)
        r12 = var_138
    
    void* rax_18 = *(rsi + 0x120)
    void* rbx_3 = i[0x24]
    rsi = rax_18 - 0x68
    
    if (rax_18 == 0)
        rsi = nullptr
    
    sub_1410129f0(rdi_2, rax_9, 0x800, rcx_4, 0xffffffff)
    sub_1410129f0(rdi_2, rax_8, 0x400, rcx_2, 0xffffffff)
    i = rbx_3 - 0x68
    
    if (rbx_3 == 0)
        i = nullptr
    
    if (rsi == 0)
        break

*arg7 -= 1
*arg2 = i_1
i_1[1].d += 1
__security_check_cookie(rax_1 ^ &var_198)
return arg2
