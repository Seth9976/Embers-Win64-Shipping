// 函数: sub_140ff35f0
// 地址: 0x140ff35f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int32_t* r13 = arg4
uint64_t r15 = zx.q(*arg4)
int64_t rsi
void*** r14
int64_t var_d8

if (r15.d == 0)
    void*** rax_22 = j_sub_140a82f30(0x60)
    rsi = 0
    r14 = rax_22
    
    if (rax_22 == 0)
        r14 = nullptr
    else
        *r14 = &data_142d3ff08
        r14[1].d = 0
        *r14 = &data_142ef2938
        *(r14 + 0xc) = 0
        r14[2].w = 0x100
        r14[3] = r13
        r14[4].d = *r13
        *r14 = &data_142ef59f0
        r14[5] = 0
        *(r14 + 0x30) = 0.o
        r14[8] = var_d8
        r14[9] = 0
        r14[0xa] = 0
        r14[0xb] = arg1
else
    rsi = 0
    TEB* gsbase
    
    if (data_143e2c128
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143e2c128)
        
        if (data_143e2c128 == 0xffffffff)
            int64_t* rcx_24 = data_143db18d0
            
            if (rcx_24 == 0)
                sub_140a53c40()
                rcx_24 = data_143db18d0
            
            int64_t r8_6
            r8_6.b = 1
            int64_t* rax_41 = (*(*rcx_24 + 0xb0))(rcx_24, u"r.UniformBufferPooling", r8_6)
            int64_t rax_39
            
            if (rax_41 == 0)
                rax_39 = 0
            else
                rax_39 = (*(*rax_41 + 0x58))(rax_41)
            
            data_143e2c120 = rax_39
            _Init_thread_footer(&data_143e2c128)
    
    if (*(data_143e2c120 + 4) == 0)
        int64_t* rcx_12 = *(arg1 + 0x168)
        int32_t var_70 = r15.d
        int32_t var_6c_1 = 2
        int32_t var_68_1 = 4
        int64_t var_64_1 = 0x10000
        int32_t var_5c_1 = 0
        int64_t var_b0 = arg3
        int64_t var_a8_1 = 0
        int64_t* var_f0 = nullptr
        int32_t rax_17 = (*(*rcx_12 + 0x18))(rcx_12, &var_70, &var_b0, &var_f0)
        
        if (rax_17 s< 0)
            int64_t var_108_2 = *(arg1 + 0x168)
            sub_140fff020(rax_17, 
                "Direct3DDevice->CreateBuffer(&Desc,&ImmutableData,UniformBufferResource."
            "GetInitReference())", 
                "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11UniformBuffer."
            "cpp", 0xed)
        
        void*** rax_19 = j_sub_140a82f30(0x60)
        
        if (rax_19 == 0)
            r14 = nullptr
        else
            int64_t* r9_3 = var_f0
            int64_t var_88
            int128_t* var_108_3 = &var_88
            var_88 = 0
            r14 = sub_140fd9490(rax_19, arg1, r13, r9_3, var_108_3)
        
        int64_t* rcx_15 = var_f0
        
        if (rcx_15 != 0)
            (*(*rcx_15 + 0x10))(rcx_15)
    else if (data_143f01c92 == 0)
    label_140ff369f:
        
        if (sub_140a80f40() != 0)
            goto label_140ff36c3
        
    label_140ff371d:
        void*** rax_10 = j_sub_140a82f30(0x60)
        r14 = rax_10
        
        if (rax_10 == 0)
            r14 = nullptr
        else
            *r14 = &data_142d3ff08
            r14[1].d = 0
            *r14 = &data_142ef2938
            *(r14 + 0xc) = 0
            r14[2].w = 0x100
            r14[3] = r13
            r14[4].d = *r13
            *r14 = &data_142ef59f0
            r14[5] = 0
            *(r14 + 0x30) = 0.o
            r14[8] = var_d8
            r14[9] = 0
            r14[0xa] = 0
            r14[0xb] = arg1
        
        r14[1].d += 1
        int64_t rax_12 = sub_140a82f30(r15, 0)
        memcpy(rax_12, arg3, r15.d)
        void*** rcx_9 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        int64_t var_e0_1 = rax_12
        var_d8.d = r15.d
        void* rax_13 = &rcx_9[5]
        
        if (rax_13 u> data_143f02bd0)
            sub_140b0e3d0(&data_143f02bc8, 0x30)
            rcx_9 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
            rax_13 = &rcx_9[5]
        
        data_143f02bac += 1
        data_143f02bc8 = rax_13
        *data_143f02ba0 = rcx_9
        data_143f02ba0 = &rcx_9[1]
        rcx_9[1] = 0
        *(rcx_9 + 0x10) = r14.o
        *rcx_9 = &data_142efaea0
        rcx_9[4] = var_d8
    else
        if (sub_140a80f10() == 0)
            if (data_143f01c92 != 0)
                goto label_140ff371d
            
            goto label_140ff369f
        
    label_140ff36c3:
        int64_t* var_d0
        sub_140fe41c0(&var_d0, *(arg1 + 0x168), *(arg1 + 0x150), arg3, r15.d)
        void*** rax_7 = j_sub_140a82f30(0x60)
        
        if (rax_7 == 0)
            r14 = nullptr
        else
            int64_t* r9_1 = var_d0
            int64_t var_a0
            int128_t* var_108_1 = &var_a0
            var_a0 = 0
            r14 = sub_140fd9490(rax_7, arg1, r13, r9_1, var_108_1)
        
        int64_t* rcx_4 = var_d0
        
        if (rcx_4 != 0)
            (*(*rcx_4 + 0x10))(rcx_4)
int64_t r12_1 = sx.q(r13[4])

if (r12_1.d != 0)
    int32_t i_1 = r14[0xa].d
    void* rcx_16 = &r14[9]
    int64_t* rdi_2 = *rcx_16
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t* rbx_1 = *rdi_2
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    char rax_25
                    
                    if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                        rax_25 = sub_1405949a0()
                    
                    if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_25 != 0))
                        (**rbx_1)(rbx_1, 1)
                    else
                        bool z_1
                        
                        if (0 == *(rbx_1 + 0xc))
                            *(rbx_1 + 0xc) = 1
                            z_1 = true
                        else
                            *(rbx_1 + 0xc)
                            z_1 = false
                        
                        if (z_1)
                            sub_1405dcc10(&data_143f02390, rbx_1)
            
            rdi_2 = &rdi_2[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
        r13 = arg4
        rcx_16 = &r14[9]
    
    int32_t rbx_2 = 0
    *(rcx_16 + 8) = 0
    
    if (*(rcx_16 + 0xc) != r12_1.d)
        sub_1405c5570(rcx_16, r12_1.d)
        rbx_2 = r14[0xa].d
        rcx_16 = &r14[9]
    
    int32_t rax_28 = rbx_2 + r12_1.d
    *(rcx_16 + 8) = rax_28
    
    if (rax_28 s> *(rcx_16 + 0xc))
        sub_1405a4d70(rcx_16)
    
    memset(&r14[9][sx.q(rbx_2)], 0, r12_1 << 3)
    
    if (r12_1.d s> 0)
        do
            void* rax_31 = *(r13 + 8)
            
            if ((rax_31.b & 1) != 0)
                rax_31 = (rax_31 s>> 1) + &r13[2]
            
            void* rcx_20 = *(zx.q(*(rax_31 + (rsi << 2))) + arg3)
            int64_t rax_33 = r14[9]
            int64_t* rbx_3 = *(rax_33 + (rsi << 3))
            *(rax_33 + (rsi << 3)) = rcx_20
            
            if (rcx_20 != 0)
                *(rcx_20 + 8) += 1
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    char rax_35
                    
                    if (rbx_3[2].b == 0 && data_143f0f1d0 == 0)
                        rax_35 = sub_1405949a0()
                    
                    if (rbx_3[2].b != 0 || (data_143f0f1d0 == 0 && rax_35 != 0))
                        (**rbx_3)(rbx_3, 1)
                    else
                        bool z_2
                        
                        if (0 == *(rbx_3 + 0xc))
                            *(rbx_3 + 0xc) = 1
                            z_2 = true
                        else
                            *(rbx_3 + 0xc)
                            z_2 = false
                        
                        if (z_2)
                            sub_1405dcc10(&data_143f02390, rbx_3)
            
            rsi += 1
        while (rsi s< r12_1)

*arg2 = r14

if (r14 != 0)
    r14[1].d += 1

__security_check_cookie(rax_1 ^ &var_128)
return arg2
