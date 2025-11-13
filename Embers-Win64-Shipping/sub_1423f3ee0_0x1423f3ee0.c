// 函数: sub_1423f3ee0
// 地址: 0x1423f3ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1

if (arg3 == 0)
    int64_t result
    result.b = 0
    return result

TEB* gsbase

if (data_143f5b820 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f5b820)
    
    if (data_143f5b820 == 0xffffffff)
        atexit(sub_142d10130)
        _Init_thread_footer(&data_143f5b820)

int16_t* var_38

if (data_143f5b808 == 0)
    data_143f5b808 = 1
    var_38 = nullptr
    int64_t var_30_1 = 0
    sub_1405947f0(&var_38, 4)
    int32_t rdi_1 = var_30_1:4.d
    int32_t rbx_1 = var_30_1.d + 4
    var_30_1.d = rbx_1
    
    if (rbx_1 s> rdi_1)
        sub_140594770(&var_38)
        rdi_1 = var_30_1:4.d
        rbx_1 = var_30_1.d
    
    int16_t* r14_1 = var_38
    UnDecorator::getReferenceType(r14_1, &data_142dfc130, 8)
    int64_t rsi_1 = sx.q(data_143f5b818)
    int32_t rax_2 = (rsi_1 + 1).d
    bool cond:1_1 = rax_2 s<= data_143f5b81c
    data_143f5b818 = rax_2
    
    if (not(cond:1_1))
        sub_1405a4f90(&data_143f5b810)
    
    int64_t* rax_5 = (rsi_1 << 4) + data_143f5b810
    *rax_5 = r14_1
    rax_5[1].d = rbx_1
    *(rax_5 + 0xc) = rdi_1
    var_38 = nullptr
    int64_t var_30_2 = 0
    sub_1405947f0(&var_38, 5)
    int32_t rsi_2 = var_30_2:4.d
    int32_t rdi_2 = var_30_2.d + 5
    var_30_2.d = rdi_2
    
    if (rdi_2 s> rsi_2)
        sub_140594770(&var_38)
        rsi_2 = var_30_2:4.d
        rdi_2 = var_30_2.d
    
    int16_t* r14_2 = var_38
    UnDecorator::getReferenceType(r14_2, u"Unit", 0xa)
    int64_t rbx_2 = sx.q(data_143f5b818)
    int32_t rax_6 = (rbx_2 + 1).d
    bool cond:2_1 = rax_6 s<= data_143f5b81c
    data_143f5b818 = rax_6
    
    if (not(cond:2_1))
        sub_1405a4f90(&data_143f5b810)
    
    int64_t* rax_9 = (rbx_2 << 4) + data_143f5b810
    *rax_9 = r14_2
    rax_9[1].d = rdi_2
    *(rax_9 + 0xc) = rsi_2
    var_38 = nullptr
    int64_t var_30_3 = 0
    sub_1405947f0(&var_38, 8)
    int32_t r14_3 = var_30_3:4.d
    int32_t rdi_3 = var_30_3.d + 8
    var_30_3.d = rdi_3
    
    if (rdi_3 s> r14_3)
        sub_140594770(&var_38)
        r14_3 = var_30_3:4.d
        rdi_3 = var_30_3.d
    
    int16_t* rsi_3 = var_38
    UnDecorator::getReferenceType(rsi_3, u"UnitMax", 0x10)
    int64_t rbx_3 = sx.q(data_143f5b818)
    int32_t rax_10 = (rbx_3 + 1).d
    bool cond:4_1 = rax_10 s<= data_143f5b81c
    data_143f5b818 = rax_10
    
    if (not(cond:4_1))
        sub_1405a4f90(&data_143f5b810)
    
    int64_t* rax_13 = (rbx_3 << 4) + data_143f5b810
    *rax_13 = rsi_3
    rax_13[1].d = rdi_3
    *(rax_13 + 0xc) = r14_3
    var_38 = nullptr
    int64_t var_30_4 = 0
    sub_1405947f0(&var_38, 0xa)
    int32_t r14_4 = var_30_4:4.d
    int32_t rdi_4 = var_30_4.d + 0xa
    var_30_4.d = rdi_4
    
    if (rdi_4 s> r14_4)
        sub_140594770(&var_38)
        r14_4 = var_30_4:4.d
        rdi_4 = var_30_4.d
    
    int16_t* rsi_4 = var_38
    UnDecorator::getReferenceType(rsi_4, u"UnitGraph", 0x14)
    int64_t rbx_4 = sx.q(data_143f5b818)
    int32_t rax_14 = (rbx_4 + 1).d
    bool cond:5_1 = rax_14 s<= data_143f5b81c
    data_143f5b818 = rax_14
    
    if (not(cond:5_1))
        sub_1405a4f90(&data_143f5b810)
    
    int64_t* rax_17 = (rbx_4 << 4) + data_143f5b810
    *rax_17 = rsi_4
    rax_17[1].d = rdi_4
    *(rax_17 + 0xc) = r14_4
    var_38 = nullptr
    int64_t var_30_5 = 0
    sub_1405947f0(&var_38, 4)
    int32_t rsi_5 = var_30_5:4.d
    int32_t rdi_5 = var_30_5.d + 4
    var_30_5.d = rdi_5
    
    if (rdi_5 s> rsi_5)
        sub_140594770(&var_38)
        rsi_5 = var_30_5:4.d
        rdi_5 = var_30_5.d
    
    int16_t* r14_5 = var_38
    UnDecorator::getReferenceType(r14_5, &data_143342fe8, 8)
    int64_t rbx_5 = sx.q(data_143f5b818)
    int32_t rax_18 = (rbx_5 + 1).d
    bool cond:6_1 = rax_18 s<= data_143f5b81c
    data_143f5b818 = rax_18
    
    if (not(cond:6_1))
        sub_1405a4f90(&data_143f5b810)
    
    int64_t* rax_21 = (rbx_5 << 4) + data_143f5b810
    *rax_21 = r14_5
    rax_21[1].d = rdi_5
    rdi = arg1
    *(rax_21 + 0xc) = rsi_5

char rax_22

if (arg4 != 0)
    rax_22 = sub_140b21a10(arg4, u"Skip")

if (arg4 == 0 || rax_22 == 0)
    var_38 = nullptr
    int32_t var_30_6 = 0
    sub_1405947f0(&var_38, 9)
    int32_t rax_23 = var_30_6 + 9
    var_30_6 = rax_23
    
    if (rax_23 s> 0)
        sub_140594770(&var_38)
    
    UnDecorator::getReferenceType(var_38, u"Detailed", 0x12)
    char rax_25 = (*(*arg3 + 0x168))(arg3, &var_38)
    int16_t* rcx_22 = var_38
    
    if (rcx_22 != 0)
        sub_140a74f90(rcx_22)
    
    int32_t rcx_23 = data_143f5b818
    int32_t r14_6 = 0
    
    if (rcx_23 s> 0)
        do
            int32_t rcx_25 = rcx_23 - r14_6 - 1
            
            if (rax_25 != 0)
                rcx_25 = r14_6
            
            int64_t* rdi_8 = (sx.q(rcx_25) << 4) + data_143f5b810
            int16_t* rdi_9
            
            if (rdi_8[1].d == 0)
                rdi_9 = &data_142d40450
            else
                rdi_9 = *rdi_8
            
            var_38 = nullptr
            int16_t* rsi_6 = nullptr
            int64_t var_30_7 = 0
            int32_t rdx_12 = 0
            int32_t rcx_26 = 0
            
            if (rdi_9 != 0 && *rdi_9 != 0)
                int64_t rbx_6 = -1
                
                do
                    rbx_6 += 1
                while (rdi_9[rbx_6] != 0)
                
                if (rbx_6.d + 1 s> 0)
                    sub_1405947f0(&var_38, rbx_6.d + 1)
                    rcx_26 = var_30_7:4.d
                    rdx_12 = var_30_7.d
                    rsi_6 = var_38
                
                int32_t rax_26 = rbx_6.d + 1 + rdx_12
                var_30_7.d = rax_26
                
                if (rax_26 s> rcx_26)
                    sub_140594770(&var_38)
                    rsi_6 = var_38
                
                UnDecorator::getReferenceType(rsi_6, rdi_9, (rbx_6.d + 1) * 2)
            
            rdi = arg1
            sub_1423efc20(rdi, arg2, arg3, &var_38, rax_25)
            
            if (rsi_6 != 0)
                sub_140a74f90(rsi_6)
            
            rcx_23 = data_143f5b818
            r14_6 += 1
        while (r14_6 s< rcx_23)
    
    var_38 = nullptr
    int32_t var_30_8 = 0
    sub_1405947f0(&var_38, 9)
    int32_t rax_27 = var_30_8 + 9
    var_30_8 = rax_27
    
    if (rax_27 s> 0)
        sub_140594770(&var_38)
    
    int16_t* rbx_8 = var_38
    UnDecorator::getReferenceType(rbx_8, u"UnitTime", 0x12)
    sub_1423efc20(rdi, arg2, arg3, &var_38, rax_25 == 0)
    
    if (rbx_8 != 0)
        sub_140a74f90(rbx_8)

return 1
