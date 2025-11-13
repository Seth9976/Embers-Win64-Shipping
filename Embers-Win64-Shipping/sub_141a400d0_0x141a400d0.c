// 函数: sub_141a400d0
// 地址: 0x141a400d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int64_t var_e8 = arg6
void* result = sub_141a2a790(arg3, arg4)
int64_t* result_2 = result

if (result != 0)
    void* result_1 = result
    int64_t* rbx_1 = *(arg1 + 0x10)
    int32_t var_78_1 = 0
    int64_t r14_1 = 0
    void* var_a0_1 = arg1
    int64_t rdi_1 = 0
    void* var_98_1 = arg2
    void* var_90_1 = arg7
    int32_t var_80_1 = 0
    uint64_t r12_2 = sx.q(*(arg1 + 0x18)) << 3 u>> 3
    int32_t var_68_1 = 0
    char var_50_1 = 0
    
    if (rbx_1 u> &rbx_1[sx.q(*(arg1 + 0x18))])
        r12_2 = 0
    
    void var_88
    
    if (r12_2 != 0)
        do
            int64_t* rdx_1 = *rbx_1
            int64_t* rax_6 = rbx_1
            int64_t* var_118_1 = &result_1
            int512_t zmm2
            zmm2.o = *(rdx_1 + 0x24)
            
            if ((rdx_1[1].b & 2) == 0)
                rax_6 = rdx_1
            
            int64_t* rcx_1 = *rax_6
            (*(*rcx_1 + 8))(rcx_1, &var_88, &result_1, zmm2, zx.q(rdx_1[5].b))
            rbx_1 = &rbx_1[1]
            rdi_1 += 1
        while (rdi_1 != r12_2)
    
    (*(*result_2 + 0x20))(result_2, arg2, zx.q(sub_141a2dbe0(&var_88, &result_1)), arg1, arg5, 
        var_e8, arg7)
    int32_t r8_2 = -1
    int32_t r9_2 = 0
    
    if (arg2 != 0)
        sub_140d3a3a0(&var_e8, arg2)
        int64_t rax_9 = var_e8
        r8_2 = rax_9.d
        r9_2 = rax_9:4.d
    
    int32_t* i = result_2[3]
    
    for (result = &i[sx.q(result_2[4].d) * 3]; i != result; i = &i[3])
        if (*i == r8_2 && i[1] == r9_2)
            int64_t rbx_2 = result_2[5]
            TEB* gsbase
            
            if (data_143f2a870 s>
                    *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                _Init_thread_header(&data_143f2a870)
                
                if (data_143f2a870 == 0xffffffff)
                    int64_t rax_39 = data_143f29fa0 + 1
                    data_143f29fa0 = rax_39
                    data_143f2a868 = sub_141a4fae0(&data_143f29fa0, rax_39.d)
                    _Init_thread_footer(&data_143f2a870)
            
            sub_141a3d100(&var_e8, rbx_2, data_143f2a868)
            int64_t* rdi_2 = result_2[2]
            uint64_t rcx_11 = 0
            void** const var_c8
            
            if (arg2 == 0)
                int64_t* var_d0_1 = rdi_2
                
                if (rdi_2 != 0)
                    int32_t rax_24 = rdi_2[1].d
                    
                    if (rax_24 != 0)
                        rdi_2[1].d = rax_24 + 1
                        rax_24.b = 1
                    
                    if (rax_24.b == 0)
                        rdi_2 = nullptr
                    
                    var_d0_1 = rdi_2
                    
                    if (rdi_2 != 0)
                        rcx_11 = result_2[1]
                        *(rdi_2 + 0xc) += 1
                
                uint64_t var_c0_2 = rcx_11
                var_c8 = &data_14302e008
                int64_t* var_b8_2 = rdi_2
                
                if (rdi_2 != 0)
                    int32_t rax_25 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) = rax_25
                    
                    if (rax_25 == 0)
                        (*(*rdi_2 + 8))(rdi_2, 1)
                
                int64_t* r12_5 = *(arg1 + 0x10)
                rcx_11.b = 0
                int64_t rbx_4 = var_e8
                uint64_t r15_3 = sx.q(*(arg1 + 0x18)) << 3 u>> 3
                
                if (r12_5 u> &r12_5[sx.q(*(arg1 + 0x18))])
                    r15_3 = 0
                
                if (r15_3 != 0)
                    char var_f8_2 = 1
                    
                    do
                        void* rax_30 = *r12_5
                        uint64_t var_110_4 = arg7 + 0xf8
                        *(arg7 + 0x2d0) = *(rax_30 + 0x10)
                        *(arg7 + 0x2d8) = *(rax_30 + 0x18)
                        *(arg7 + 0x2dc) = 2
                        int32_t var_e0_3 = *(arg7 + 0x2d8)
                        int64_t* var_118_3 = &var_c8
                        var_e8 = *(arg7 + 0x2d0)
                        sub_141a590e0(arg7 + 0x148, 2, rbx_4, &var_e8, var_118_3, var_110_4)
                        r14_1 += 1
                        r12_5 = &r12_5[1]
                    while (r14_1 != r15_3)
                    
                    rdi_2 = var_d0_1
                    rcx_11 = zx.q(var_f8_2)
                
                char rdx_11 = *(arg7 + 0x2dd)
                var_e8.d = data_1439d284c
                var_e8:4.d = 0xffffffff
                *(arg7 + 0x2d0) = var_e8
                *(arg7 + 0x2d8) = 0xffffffff
                *(arg7 + 0x2dc) = rdx_11
                
                if (rcx_11.b == 0 && rdx_11 != 0)
                    int32_t var_e0_4 = *(arg7 + 0x2d8)
                    int64_t* var_118_4 = &var_c8
                    var_e8 = *(arg7 + 0x2d0)
                    sub_141a590e0(arg7 + 0x148, rdx_11, rbx_4, &var_e8, var_118_4, arg7 + 0xf8)
                
                if (var_b8_2 != 0)
                    int32_t temp0_1 = *(var_b8_2 + 0xc)
                    *(var_b8_2 + 0xc) -= 1
                    
                    if (temp0_1 == 1)
                        (*(*var_b8_2 + 8))(var_b8_2, 1)
                
                result = &data_142d4ba10
            else
                int64_t* var_d8_2 = rdi_2
                
                if (rdi_2 != 0)
                    int32_t rax_13 = rdi_2[1].d
                    
                    if (rax_13 != 0)
                        rdi_2[1].d = rax_13 + 1
                        rax_13.b = 1
                    
                    if (rax_13.b == 0)
                        rdi_2 = nullptr
                    
                    var_d8_2 = rdi_2
                    
                    if (rdi_2 != 0)
                        rcx_11 = result_2[1]
                        *(rdi_2 + 0xc) += 1
                
                uint64_t var_c0_1 = rcx_11
                var_c8 = &data_14302dff0
                int64_t* var_b8_1 = rdi_2
                
                if (rdi_2 != 0)
                    int32_t rax_14 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) = rax_14
                    
                    if (rax_14 == 0)
                        (*(*rdi_2 + 8))(rdi_2, 1)
                
                int64_t* r12_4 = *(arg1 + 0x10)
                rcx_11.b = 0
                int64_t rbx_3 = var_e8
                uint64_t r15_1 = sx.q(*(arg1 + 0x18)) << 3 u>> 3
                
                if (r12_4 u> &r12_4[sx.q(*(arg1 + 0x18))])
                    r15_1 = 0
                
                int64_t var_118_2
                
                if (r15_1 != 0)
                    char var_f8_1 = 1
                    
                    do
                        void* rax_19 = *r12_4
                        *(arg7 + 0x2d0) = *(rax_19 + 0x10)
                        int32_t rax_20 = *(rax_19 + 0x18)
                        *(arg7 + 0x2d8) = rax_20
                        int32_t var_e0_1 = rax_20
                        *(arg7 + 0x2dc) = 2
                        int64_t* var_110_2 = &var_e8
                        var_118_2.b = 2
                        var_e8 = *(arg7 + 0x2d0)
                        sub_1405c5900(arg7 + 0xf8, rbx_3, &var_c8, arg2, var_118_2.b, var_110_2)
                        r14_1 += 1
                        r12_4 = &r12_4[1]
                    while (r14_1 != r15_1)
                    
                    rdi_2 = var_d8_2
                    rcx_11 = zx.q(var_f8_1)
                
                char rdx_9 = *(arg7 + 0x2dd)
                var_e8.d = data_1439d284c
                var_e8:4.d = 0xffffffff
                *(arg7 + 0x2d0) = var_e8
                *(arg7 + 0x2d8) = 0xffffffff
                *(arg7 + 0x2dc) = rdx_9
                
                if (rcx_11.b == 0)
                    int32_t var_e0_2 = *(arg7 + 0x2d8)
                    var_e8 = *(arg7 + 0x2d0)
                    var_118_2.b = rdx_9
                    sub_1405c5900(arg7 + 0xf8, rbx_3, &var_c8, arg2, var_118_2.b, &var_e8)
                
                if (var_b8_1 != 0)
                    int32_t temp1_1 = *(var_b8_1 + 0xc)
                    *(var_b8_1 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*var_b8_1 + 8))(var_b8_1, 1)
                
                result = &data_142d4ba10
            
            var_c8 = &data_142d4ba10
            
            if (rdi_2 != 0)
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d == 1)
                    result = (**rdi_2)(rdi_2)
                    int32_t temp3_1 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        result = (*(*rdi_2 + 8))(rdi_2, 1)
            
            break

__security_check_cookie(rax_1 ^ &var_138)
return result
