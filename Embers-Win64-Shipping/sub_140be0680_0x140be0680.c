// 函数: sub_140be0680
// 地址: 0x140be0680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const r14 = &data_142d40450
int32_t rsi = arg3
int64_t* rbx = arg2
int64_t r15 = 0

while (true)
    int64_t* var_98
    int64_t var_90
    
    if (rbx == 0)
        var_98 = nullptr
        var_90 = 0
        sub_1405947f0(&var_98, 5)
        int32_t rax_1 = var_90.d + 5
        var_90.d = rax_1
        
        if (rax_1 s> 0)
            sub_140594770(&var_98)
        
        UnDecorator::getReferenceType(var_98, u"None", 0xa)
    else
        sub_140b63b70(&rbx[5], &var_98)
    
    int64_t var_78
    int64_t* rax_2 = sub_140a35790(&var_98, &var_78)
    int16_t* rcx_5
    
    if (rax_2[1].d == 0)
        rcx_5 = &data_142d40450
    else
        rcx_5 = *rax_2
    
    int32_t rax_3 = sub_140a5ff80(rcx_5, rsi)
    int64_t rcx_6 = var_78
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    int64_t* rcx_7 = var_98
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    int64_t var_68
    void* var_58
    int64_t* rax_6 = sub_140a35790((*(*rbx + 0x60))(rbx, &var_58, 0, 0), &var_68)
    int16_t* rcx_10
    
    if (rax_6[1].d == 0)
        rcx_10 = &data_142d40450
    else
        rcx_10 = *rax_6
    
    int32_t rax_7 = sub_140a5ff80(rcx_10, rax_3)
    int64_t rcx_11 = var_68
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    void* rcx_12 = var_58
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    int16_t* var_88
    sub_140a2e390(&var_88, u"%u", zx.q(rbx[7].d))
    int16_t* const rcx_14 = &data_142d40450
    int16_t* rdi_2 = var_88
    int32_t var_80
    
    if (var_80 != 0)
        rcx_14 = rdi_2
    
    rsi = sub_140a5ff80(rcx_14, rax_7)
    
    if (rdi_2 != 0)
        sub_140a74f90(rdi_2)
    
    if (arg4 == 0)
        return zx.q(rsi)
    
    int64_t rcx_16 = *(rbx[1] + 0x10)
    
    if (((rcx_16 u>> 0x15).b & 1) == 0)
        if (((rcx_16 u>> 0x14).b & 1) == 0)
            return zx.q(rsi)
        
        int64_t arg_10 = *(rbx[0xf] + 0x18)
        sub_140b63b70(&arg_10, &var_88)
        int16_t** rax_13 = sub_140a35790(&var_88, &var_58)
        
        if (rax_13[1].d != 0)
            r14 = *rax_13
        
        int32_t rax_14 = sub_140a5ff80(r14, rsi)
        void* rcx_22 = var_58
        int32_t r13_1 = rax_14
        
        if (rcx_22 != 0)
            sub_140a74f90(rcx_22)
        
        int16_t* rcx_23 = var_88
        
        if (rcx_23 != 0)
            sub_140a74f90(rcx_23)
        
        void* rsi_2 = arg1
        int64_t* r14_1 = nullptr
        var_98 = nullptr
        int32_t rdi_3 = 0
        int32_t r12_1 = 0
        var_90:4.d = 0
        *(rsi_2 + 4) += 1
        void* rax_15 = rbx[0xf]
        var_58 = rax_15
        void* const i_2
        
        if (rax_15 == 0)
            i_2 = nullptr
        else
            i_2 = *(rax_15 + 0x50)
        
        int32_t var_48_1 = 0xffffffff
        int16_t var_44_1 = 0x101
        char var_42_1 = 0
        sub_1406328d0(&var_58)
        void* const i = i_2
        
        if (i != 0)
            do
                if ((0x80000000 & zx.q(*(i + 0x40))) == 0)
                    int64_t rsi_3 = sx.q(rdi_3)
                    rdi_3 = (rsi_3 + 1).d
                    var_90.d = rdi_3
                    
                    if (rdi_3 s> r12_1)
                        sub_1405a4d70(&var_98)
                        r12_1 = var_90:4.d
                        rdi_3 = var_90.d
                        r14_1 = var_98
                    
                    r14_1[rsi_3] = i
                
                void* i_1 = *(i + 0x20)
                sub_1406328d0(&var_58)
                i = i_1
            while (i != 0)
            
            r13_1 = rax_14
            rsi_2 = arg1
        
        sub_140bd47e0(r14_1, rdi_3, rax_14.b)
        int64_t* rbx_1 = r14_1
        void* rcx_28 = &r14_1[sx.q(rdi_3)]
        uint64_t rdi_7 = (rcx_28 - r14_1 + 7) u>> 3
        
        if (r14_1 u> rcx_28)
            rdi_7 = 0
        
        if (rdi_7 != 0)
            do
                int64_t r9
                r9.b = 1
                int32_t rax_18
                rax_18, r9 = sub_140be0680(rsi_2, *rbx_1, zx.q(r13_1), r9)
                r15 += 1
                rbx_1 = &rbx_1[1]
                r13_1 = rax_18
            while (r15 != rdi_7)
        
        if (r14_1 != 0)
            sub_140a74f90(r14_1)
        
        *(rsi_2 + 4) -= 1
        return zx.q(r13_1)
    
    rbx = rbx[0xf]
