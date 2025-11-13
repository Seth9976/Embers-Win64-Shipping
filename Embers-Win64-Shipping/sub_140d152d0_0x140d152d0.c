// 函数: sub_140d152d0
// 地址: 0x140d152d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
void* rsp = &var_138
char var_118
int64_t rax_1 = __security_cookie ^ &var_118
int64_t r14 = arg1
int64_t var_e0 = arg1
void** const var_f8 = &data_142ead968
int512_t zmm0
zmm0.o = zx.o(0)
int64_t var_d8 = *(arg2 + 0x60)
void* var_e8 = arg2
void* var_88 = arg3
int64_t* rcx = *(arg2 + 0x20)
int64_t var_78 = *(arg2 + 0x50)
int16_t var_f0 = 0x100
int128_t var_c8 = zx.o(0)
int64_t var_98 = 0
int32_t var_90 = 0
int32_t var_8c = 8
void** var_80 = nullptr
int64_t var_70 = 0
char var_68 = 0
void* rax_6 = (*(*rcx + 0x328))(zmm0, r14, arg2)
void* rbx = rax_6
uint64_t r12
r12.b = rax_6 != 0
var_118 = r12.b

if (rax_6 == 0)
    int64_t count = sx.q(*(arg2 + 0x58))
    
    if (count.d != 0)
        int64_t rcx_1 = sx.q((count + 0xf).d)
        int64_t rax_8 = rcx_1 + 0xf
        
        if (rax_8 u<= rcx_1)
            rax_8 = 0xffffffffffffff0
        
        int64_t rax_9 = rax_8 & 0xfffffffffffffff0
        __chkstk(rax_9)
        rsp = &var_138 - rax_9
        rbx = (rsp + 0x2f) & 0xfffffffffffffff0
    else
        rbx = nullptr
    
    memset(rbx, 0, count)

if (*(arg2 + 0xb8) != 0xffff)
    void* rax_10 = sub_140be0b10(arg2)
    
    if (rax_10 != 0)
        rsp -= 0x30
        *(rsp + 0x20)
        void** rdx_3 = (rsp + 0x2f) & 0xfffffffffffffff0
        rdx_3[1] = arg4
        *rdx_3 = rax_10
        var_80 = rdx_3

char* rax_11 = *(arg3 + 0x20)
void*** rsi = &var_80
int64_t* rbx_3 = *(arg2 + 0x50)

if (*rax_11 != 0x16)
    do
        *(arg3 + 0x38) = 0
        int64_t rdx_4 = rbx_3[8]
        
        if (((rdx_4 u>> 0xa).b & 1) == 0)
            if (not(test_bit(rdx_4, 8)))
                void* r14_2 = sx.q(*(rbx_3 + 0x4c)) + rbx
                
                if (not(test_bit(rdx_4, 9)))
                    (*(*rbx_3 + 0xf0))(rbx_3, r14_2)
                else
                    memset(r14_2, 0, sx.q(*(rbx_3 + 0x3c) * rbx_3[7].d))
                
                char* rax_23 = *(arg3 + 0x20)
                uint32_t rcx_12 = zx.d(*rax_23)
                *(arg3 + 0x20) = &rax_23[1]
                (&data_143e1cd60)[zx.q(rcx_12)](*(arg3 + 0x18), arg3, r14_2)
            else
                char* rax_14 = *(arg3 + 0x20)
                uint32_t rcx_5 = zx.d(*rax_14)
                *(arg3 + 0x20) = &rax_14[1]
                (&data_143e1cd60)[zx.q(rcx_5)](*(arg3 + 0x18), arg3, 0)
                rsp -= 0x30
                void* rax_17 = *(arg3 + 0x38)
                void* rcx_9 = (rsp + 0x2f) & 0xfffffffffffffff0
                
                if (rax_17 == 0)
                    rax_17 = sx.q(*(rbx_3 + 0x4c)) + rbx
                
                *(rcx_9 + 8) = rax_17
                *rcx_9 = rbx_3
                void** rax_19 = *rsi
                
                if (rax_19 == 0)
                    *rsi = rcx_9
                else
                    rax_19[2] = rcx_9
                    rsi = &(*rsi)[2]
        
        rax_11 = *(arg3 + 0x20)
        rbx_3 = rbx_3[4]
    while (*rax_11 != 0x16)
    
    r12 = zx.q(var_118)
    r14 = arg1

*(arg3 + 0x20) = &rax_11[1]
void** rax_27 = *rsi

if (rax_27 != 0)
    rax_27[2] = 0

if (r12.b == 0)
    for (int64_t* i = *(arg2 + 0xc0); i != 0; i = i[4])
        if (not(test_bit(zx.q(i[8].d), 9)))
            (*(*i + 0xf0))(i, sx.q(*(i + 0x4c)) + rbx)
        else
            memset(sx.q(*(i + 0x4c)) + rbx, 0, sx.q(*(i + 0x3c) * i[7].d))

if (*(arg2 + 0x68) s> 0)
    arg5(r14, &var_f8, arg4)

if (r12.b == 0)
    for (int64_t* i_1 = *(arg2 + 0x80); i_1 != 0; i_1 = i_1[0xd])
        int64_t rax_32 = i_1[8]
        
        if (not(test_bit(rax_32, 8)) && (not.b((rax_32 u>> 0x24).b) & 1) != 0)
            (*(*i_1 + 0xe8))(i_1, sx.q(*(i_1 + 0x4c)) + rbx)

void** const result = &data_142ead968
var_f8 = &data_142ead968

if (var_98 != 0)
    result = sub_140a74f90(var_98)

__security_check_cookie(rax_1 ^ &var_118)
return result
