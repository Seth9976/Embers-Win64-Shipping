// 函数: sub_140bcfa90
// 地址: 0x140bcfa90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
uint64_t result = __security_cookie ^ &var_b8
uint64_t result_1 = result

if (arg2[5].b s< 0 && (*(arg2 + 0x2a) & 0x20) == 0 && (*(arg2 + 0x2b) & 1) == 0)
    int64_t* rcx = arg2[1]
    int32_t* rdx = *rcx
    
    if (&rdx[1] u<= rcx[1])
        arg1[3].d = *rdx
        int64_t* rax_3 = arg2[1]
        *rax_3 += 4
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, &arg1[3], arg4)
    else
        (*(*arg2 + 0x150))(arg2, &arg1[3], 4)
    
    int64_t* rcx_2 = arg2[1]
    int64_t* r12_1 = nullptr
    bool cond:2_1 = (arg1[3].d & 0x2000) == 0
    int64_t var_80
    __builtin_memset(&var_80, 0, 0x18)
    int64_t* rdx_2 = *rcx_2
    int64_t r8 = rcx_2[1]
    int32_t var_88
    int64_t var_78
    int64_t var_70
    
    if (cond:2_1)
        if (rdx_2 + 4 u> r8)
            int32_t* rdx_6 = &var_88
            
            if ((*(arg2 + 0x29) & 0x20) != 0)
                sub_140b54070(arg2, rdx_6, arg4)
            else
                (*(*arg2 + 0x150))(arg2, rdx_6, 4)
        else
            var_88 = *rdx_2
            *rcx_2 += 4
        
        int64_t* rcx_7 = arg2[1]
        var_78 = sx.q(var_88)
        int32_t* rdx_7 = *rcx_7
        
        if (&rdx_7[1] u> rcx_7[1])
            int32_t* rdx_8 = &var_88
            
            if ((*(arg2 + 0x29) & 0x20) != 0)
                sub_140b54070(arg2, rdx_8, arg4)
            else
                (*(*arg2 + 0x150))(arg2, rdx_8, 4)
        else
            var_88 = *rdx_7
            *rcx_7 += 4
        
        var_70 = sx.q(var_88)
    else
        if (&rdx_2[1] u> r8)
            int64_t* rdx_3 = &var_78
            
            if ((*(arg2 + 0x29) & 0x20) != 0)
                sub_140b540d0(arg2, rdx_3, arg4)
            else
                (*(*arg2 + 0x150))(arg2, rdx_3, 8)
        else
            var_78 = *rdx_2
            *rcx_2 += 8
        
        int64_t* rcx_4 = arg2[1]
        int64_t* rdx_4 = *rcx_4
        
        if (&rdx_4[1] u> rcx_4[1])
            int64_t* rdx_5 = &var_70
            
            if ((*(arg2 + 0x29) & 0x20) != 0)
                sub_140b540d0(arg2, rdx_5, arg4)
            else
                (*(*arg2 + 0x150))(arg2, rdx_5, 8)
        else
            var_70 = *rdx_4
            *rcx_4 += 8
    
    int64_t* rcx_9 = arg2[1]
    int64_t r15_2 = sx.q(arg6) * var_78
    int64_t* rdx_9 = *rcx_9
    
    if (&rdx_9[1] u> rcx_9[1])
        int64_t* rdx_10 = &var_80
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b540d0(arg2, rdx_10, arg4)
        else
            (*(*arg2 + 0x150))(arg2, rdx_10, 8)
    else
        var_80 = *rdx_9
        *rcx_9 += 8
    
    char rax_22 = Concurrency::details::are_vista_sync_apis_available()
    
    if ((arg1[3].d & 0x8000) != 0)
        int64_t* rdx_11 = arg2[1]
        int16_t* r8_1 = *rdx_11
        
        if (&r8_1[1] u> rdx_11[1])
            int16_t* rdx_12 = &var_88
            
            if ((*(arg2 + 0x29) & 0x20) != 0)
                sub_140b54000(arg2, rdx_12, arg4)
            else
                (*(*arg2 + 0x150))(arg2, rdx_12, 2)
        else
            var_88.w = *r8_1
            *rdx_11 += 2
    
    void* rax_24 = sub_140d21d80(arg3)
    int32_t r9_1 = arg1[3].d
    void* r8_2 = rax_24
    void* var_68 = rax_24
    int32_t var_58
    int32_t rax_27
    
    if ((not.b(r9_1.b) & 1) != 0 || rax_22 == 0)
        rax_27 = -1
        *arg1 = r15_2
    else
        int64_t rax_25 = -1
        var_58 = *(r8_2 + 0x54)
        
        if (r15_2 s> 0)
            rax_25 = var_80
        
        uint8_t var_4d_1 = ((r9_1 u>> 0xb).b & 1) + 3
        rax_27 = (rax_25 + 0x80000000000000):4.d
        *arg1 = var_58.q
        arg1[3].d = r9_1 | 0x10000
    
    arg1[1].d = rax_27
    void* rbx_1 = nullptr
    
    if (rax_22 == 0)
        void* rax_28 = sub_140cba0e0(r8_2)
        r8_2 = var_68
        rbx_1 = rax_28
        
        if (rax_28 != 0)
            r12_1 = rax_28 + 0x1e0
    
    int32_t rax_29 = arg1[3].d
    var_88.b = 0
    char r14_2
    
    if ((not.b(rax_29.b) & 1) == 0)
        result = zx.q(rax_29 u>> 0xe)
        
        if ((result.b & 1) != 0)
            result, arg4 = sub_140bcd790(arg1, arg2, r8_2, r12_1, arg4, &var_70, &var_80)
        
        if (rbx_1 != 0)
            result = *(rbx_1 + 0x198)
            var_80 += result
        
        if (arg5 == 0)
            if ((*(arg2 + 0x2a) & 0x10) == 0)
                result = zx.q(arg1[3].d u>> 8)
                
                if ((result.b & 1) == 0)
                    int64_t rax_34 = (*(*arg2 + 0x20))(arg2)
                    int64_t r8_6 = *arg2
                    (*(r8_6 + 0x178))(arg2, var_80, r8_6)
                    int128_t* rax_35 = sub_140a82f30(r15_2, 0)
                    arg1[2] = rax_35
                    sub_140bd0550(arg1, arg2, rax_35, r15_2, arg4)
                    result = (*(*arg2 + 0x178))(arg2, rax_34)
            
            r14_2 = var_88.b
        else
            sub_140bc4490(arg1, &var_58, r12_1)
            char rax_31 = sub_140bcbb30(arg1, &var_58, var_80, r15_2)
            int64_t rcx_24 = var_58.q
            result = 1
            r14_2 = var_88.b
            
            if (rax_31 == 0)
                r14_2 = 1
            
            if (rcx_24 != 0)
                result = sub_140a74f90(rcx_24)
    else
        int128_t* rax_30 = sub_140a82f30(r15_2, 0, r8_2)
        arg1[2] = rax_30
        result = sub_140bd0550(arg1, arg2, rax_30, r15_2, arg4)
        r14_2 = var_88.b
    
    if (rax_22 == 0 && r12_1 != 0)
        int64_t r15_3 = var_80
        void* rdi_2 = var_68 + 0x5c
        AcquireSRWLockExclusive(&data_143e1a888)
        bool cond:12_1 = data_1439a9a08 == data_1439a9a34
        void* rbx_3 = *rdi_2
        var_68 = rbx_3
        
        if (cond:12_1)
        label_140bcff5e:
            var_68 = rdi_2
            sub_140bbe530(&data_1439a9a00, &var_88, &var_68, nullptr)
            void* rbx_4 = data_1439a9a00 + sx.q(var_88) * 0x28
            sub_140597df0(rbx_4 + 8, r12_1)
            *(rbx_4 + 0x18) = 1
        else
            int32_t rax_39 = sub_140b5ead0(rbx_3.d) + var_68:4.d
            void* r8_8 = data_1439a9a40
            void* rax_41 = &data_1439a9a38
            
            if (r8_8 != 0)
                rax_41 = r8_8
            
            int32_t rax_42 = *(rax_41 + ((sx.q(data_1439a9a48 - 1) & sx.q(rax_39)) << 2))
            
            if (rax_42 == 0xffffffff)
                goto label_140bcff5e
            
            int64_t r8_9 = data_1439a9a00
            int64_t rdx_24
            
            while (true)
                rdx_24 = sx.q(rax_42)
                int64_t rcx_33 = rdx_24 * 5
                
                if (*(r8_9 + (rcx_33 << 3)) == rbx_3)
                    break
                
                rax_42 = *(r8_9 + (rcx_33 << 3) + 0x20)
                
                if (rax_42 == 0xffffffff)
                    goto label_140bcff5e
            
            if (rax_42 == 0xffffffff)
                goto label_140bcff5e
            
            void* rax_48 = r8_9 + rdx_24 * 0x28
            
            if (rax_48 == 0 || rax_48 == -8)
                goto label_140bcff5e
            
            *(rax_48 + 0x18) += 1
        
        var_58.q = *rdi_2
        int64_t var_54 = r15_3
        sub_140bc2b00(&data_1439a9a50, &var_68)
        int128_t* var_60
        *var_60 = var_58.o
        ReleaseSRWLockExclusive(&data_143e1a888)
        result = zx.q(var_68.d)
        arg1[1].d = result.d
    
    if (r14_2 != 0)
        result = sub_140bc78b0(arg1)

__security_check_cookie(result_1 ^ &var_b8)
return result
