// 函数: sub_141058530
// 地址: 0x141058530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = *(arg2 + 0x18)
int64_t r14 = 0
void* i = arg2
uint64_t rsi = zx.q(rbx[4])
uint32_t count = *rbx

if (rsi.d != 0)
    uint32_t rdx = (rsi << 3).d
    int64_t rsi_1 = sx.q(rdx)
    r14 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    int64_t rax_1 = rsi_1 + r14
    
    if (rax_1 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, rdx + 8)
        r14 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_1 = rsi_1 + r14
    
    rsi = sx.q(rsi.d)
    data_143f02bc8 = rax_1
    
    if (rsi.d s> 0)
        int64_t r9_1 = 0
        
        do
            void* rax_2 = *(rbx + 8)
            void* rcx = rax_2
            char r8 = rbx[2].b & 1
            
            if (r8 != 0)
                rcx = (rcx s>> 1) + &rbx[2]
            
            uint32_t rdx_2 = zx.d(*(rcx + (r9_1 << 2) + 2))
            
            if (rdx_2.b u> 0x14 || not(test_bit(0x191000, rdx_2)))
                void* rax_4
                
                if (rdx_2.b - 9 u<= 2)
                label_14105862f:
                    
                    if (r8 != 0)
                        rax_2 = (rax_2 s>> 1) + &rbx[2]
                    
                    rax_4 = *(zx.q(*(rax_2 + (r9_1 << 2))) + arg3)
                    
                    if (rax_4 != 0)
                        rax_4 = *(rax_4 + 0x10)
                else
                    rdx_2.b -= 0xd
                    
                    if (rdx_2.b u<= 2)
                        goto label_14105862f
                    
                    if (r8 != 0)
                        rax_2 = (rax_2 s>> 1) + &rbx[2]
                    
                    rax_4 = *(zx.q(*(rax_2 + (r9_1 << 2))) + arg3)
                
                *(r14 + (r9_1 << 3)) = rax_4
            
            r9_1 += 1
        while (r9_1 s< rsi)

int32_t result

do
    void* rax_6 = *(i + 0x28)
    void* var_a8 = rax_6
    int512_t zmm0
    zmm0.o = zx.o(0)
    int32_t var_a0_1 = 0
    int64_t* var_98_1 = zmm0.q
    int64_t var_88
    __builtin_memset(&var_88, 0, 0x40)
    int16_t var_48_1 = 0xff00
    
    if (count != 0)
        int64_t rax_8
        
        if (*(i + 0xb8) != 2)
            int64_t* rax_10
            int512_t zmm0_1
            rax_10, zmm0_1 = sub_1410246b0(**(arg1 + 0x20))
            rax_8 = sub_141013310(rax_10, count, &var_a8, zmm0_1)
        else
            rax_8 = sub_141012e10(*(**(arg1 + 0x20) + (zx.q(*(rax_6 + 0x18)) << 3) + 0x4a0), count, 
                0x100, &var_a8, zmm0)
        
        zmm0 = memcpy(rax_8, arg3, count)
    
    void*** rcx_12 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    void* rax_11 = &rcx_12[0x12]
    
    if (rax_11 u> data_143f02bd0)
        zmm0 = sub_140b0e3d0(&data_143f02bc8, 0x98)
        rcx_12 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_11 = &rcx_12[0x12]
    
    data_143f02bac += 1
    data_143f02bc8 = rax_11
    *data_143f02ba0 = rcx_12
    data_143f02ba0 = &rcx_12[1]
    rcx_12[1] = 0
    *rcx_12 = &data_142f01e30
    rcx_12[2] = i
    rcx_12[3] = var_a8
    rcx_12[4].d = 0
    __builtin_memset(&rcx_12[5], 0, 0x50)
    rcx_12[0xf].w = 0xff00
    rcx_12[0x10] = r14
    rcx_12[0x11].d = rsi.d
    sub_141059a80(&rcx_12[3], zmm0)
    rcx_12[4].d = 0
    __builtin_memset(&rcx_12[5], 0, 0x50)
    *(rcx_12 + 0x79) = 0xff
    memmove(&rcx_12[3], &var_a8, 0x68)
    var_48_1:1.b = 0xff
    int32_t result_1 = 0
    int64_t var_78
    __builtin_memset(&var_78, 0, 0x2c)
    __builtin_memset(&var_98_1, 0, 0x1c)
    int64_t* arg_20
    sub_141980430(&data_143f02b98, &arg_20, 1)
    int64_t* rcx_17 = arg_20
    
    if (rcx_17 != 0)
        rcx_17[9].d -= 1
        
        if (rcx_17[9].d == 1)
            sub_140a2f6e0(rcx_17)
    
    result = result_1
    i = *(i + 0x30)
    int64_t* rcx_18
    
    if (result == 1)
    label_14105888e:
        rcx_18 = var_98_1
        
        if (*(rcx_18 + 0xfe) == 0)
        label_1410588c2:
            result = rcx_18[1].d
            rcx_18[1].d -= 1
            
            if (result == 1 && rcx_18 != 0)
                result = (**rcx_18)(rcx_18, 1)
        else
            result, zmm0 = sub_141049740(rcx_18)
    else if (result == 2)
        int64_t* var_88_1
        int32_t var_80
        int32_t var_50
        
        if (var_48_1:1.b != 1)
            result, zmm0 = sub_14101be70(var_88_1, &var_a8)
        else
            result, zmm0 = sub_14101bf40(var_88_1, var_98_1, var_80, var_50)
    else if (result s> 4)
        if (result s<= 6)
            rcx_18 = var_98_1
            
            if (*(rcx_18 + 0xfe) == 0)
                goto label_1410588c2
            
            int32_t rax_16 = 0
            
            if (0 == rcx_18[1].d)
                rcx_18[1].d = 0
            else
                rax_16 = rcx_18[1].d
            
            rcx_18 = var_98_1
            
            if (rax_16 != 1)
                goto label_1410588c2
            
            result, zmm0 = sub_141049740(rcx_18)
        else if (result == 7)
            goto label_14105888e
while (i != 0)

return result
