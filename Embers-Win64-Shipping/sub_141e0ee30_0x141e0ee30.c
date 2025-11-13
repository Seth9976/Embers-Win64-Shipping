// 函数: sub_141e0ee30
// 地址: 0x141e0ee30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
int128_t zmm6 = arg1[0x18].d
int64_t var_88 = 0
int32_t var_80 = 0
int64_t var_7c = 4
int64_t var_70 = 0
int32_t var_68 = 0
int32_t var_64 = 0x20
int32_t var_60 = 0xffffffff
int32_t var_5c = 0
int64_t var_50 = 0
int32_t var_48 = 0
void var_1a8
sub_140dd5b90(&var_1a8, arg1)
int64_t rbx = data_143f394b0
int64_t* r13 = arg1[0x1b]
int32_t var_190 = zmm6.d
void var_188
void* var_1a0 = &var_188
int32_t var_198 = 0x3f800000
int32_t var_194 = 0x3f800000

if ((*(arg1 + 0x6d9) & 4) != 0)
    sub_141e06200(arg1, r13)
    int64_t* rcx_2 = arg1[0x15]
    
    if (rcx_2 != 0)
        int64_t* rax_3 = (*(*rcx_2 + 0x40))(rcx_2)
        int64_t r15_1 = 0
        int64_t* r14_1 = *rax_3
        uint64_t r12_2 = sx.q(rax_3[1].d) << 3 u>> 3
        
        if (r14_1 u> &r14_1[rax_3[1]])
            r12_2 = 0
        
        if (r12_2 != 0)
            do
                int64_t rsi_1 = sx.q(*(*r14_1 + 0x4c))
                void* rsi_2 = rsi_1 + arg1[0x14]
                
                if (rsi_1 != neg.q(arg1[0x14]) && sub_141df1e90(rsi_2) != 0)
                    void var_1b8
                    sub_140dd5b90(&var_1b8, arg1)
                    sub_141e2a4a0(rsi_2, &var_1b8)
                    void var_1b0
                    sub_140dd5b90(&var_1b0, arg1)
                    sub_141e170d0(rsi_2, &var_1b0)
                
                r14_1 = &r14_1[1]
                r15_1 += 1
            while (r15_1 != r12_2)
    
    *(arg1 + 0x6d9) &= 0xfb

(*(*arg1 + 0x60))(arg1)

if (arg1[0xdb].b == 0 && arg1[0x89] != data_143de5458)
    int512_t zmm1
    zmm1.o = arg1[0x18].d
    (*(*arg1 + 0x20))(arg1, zmm1)
    arg1[0x89] = data_143de5458

char rsi_3 = arg1[0xdb].b
void* rdx_6 = &var_1a8
arg1[0xdb].b = 1
int64_t rax_12 = *arg1

if (r13 != arg1[0x1b])
    (*(rax_12 + 0x38))(arg1, rdx_6, r13, rbx)
else
    (*(rax_12 + 0x28))(arg1, rdx_6)

arg1[0xdb].b = rsi_3
int32_t var_48_1 = 0

if (var_50 != 0)
    sub_140a74f90(var_50)

void* result = sub_141df2bb0(&var_188)
__security_check_cookie(rax_1 ^ &var_1d8)
return result
