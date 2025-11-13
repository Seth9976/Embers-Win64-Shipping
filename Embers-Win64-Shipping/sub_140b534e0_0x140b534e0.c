// 函数: sub_140b534e0
// 地址: 0x140b534e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result
void* const var_78
int128_t var_68
int32_t arg_18
int32_t arg_20
void* const r12_1

if (arg3 == 1)
    void* rax_30 = *arg2
    arg_18 = 0
    r12_1 = nullptr
    var_78 = nullptr
    int32_t r15_2 = 0
    int32_t var_6c_3 = 0
    int64_t* r9_6 = *(rax_30 + 8)
    int64_t* rcx_29 = r9_6[1]
    int32_t* rdx_20 = *rcx_29
    
    if (&rdx_20[1] u> rcx_29[1])
        void* rax_34 = *r9_6
        
        if ((*(r9_6 + 0x29) & 0x20) != 0)
            int64_t r10_2 = *(rax_34 + 0x150)
            
            if ((r9_6[5].b & 1) == 0)
                arg_20 = 0
                r10_2(r9_6, &arg_20, 4)
            else
                r10_2(r9_6, &arg_18, 4)
                arg_18 = _bswap(arg_18)
        else
            (*(rax_34 + 0x150))(r9_6, &arg_18, 4)
    else
        arg_18 = *rdx_20
        int64_t* rax_33 = r9_6[1]
        *rax_33 += 4
    
    if ((*(*(*arg2 + 8) + 0x28) & 1) != 0)
        int64_t rdi_8 = sx.q(arg_18)
        int32_t temp2_1 = rdi_8.d
        
        if (temp2_1 s> 0)
            int32_t var_70_3 = rdi_8.d
            sub_140b52a30(&var_78)
            r12_1 = var_78
            
            if (rdi_8.d != 0)
                void* rax_38 = r12_1 + 0x24
                int32_t i
                
                do
                    *(rax_38 - 0x24) = 0
                    *(rax_38 - 0x1c) = 0
                    *(rax_38 - 0xc) = 0
                    *(rax_38 - 4) = 0
                    rax_38 += 0x28
                    i = rdi_8.d
                    rdi_8 = zx.q(rdi_8.d - 1)
                while (i != 1)
            
            r15_2 = var_70_3
        else if (temp2_1 s< 0)
            int32_t i_4 = neg.d(rdi_8.d)
            
            if (i_4 != 0)
                int32_t i_3 = i_4
                int64_t rax_40 = rdi_8 * 0x28
                arg_20.q = rax_40
                int64_t* r15_3 = rax_40 + 0x18
                int32_t i_1
                
                do
                    int64_t rcx_33 = *r15_3
                    
                    if (rcx_33 != 0)
                        arg4 = sub_140a74f90(rcx_33)
                    
                    r15_3 = &r15_3[5]
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)
                int32_t r13_3 = neg.d(i_4)
                
                if (r13_3 != rdi_8.d)
                    memmove(arg_20.q, nullptr, (r13_3 - rdi_8.d) * 0x28)
                
                sub_140b52b50(&var_78)
                r12_1 = var_78
                r15_2 = r13_3
    
    int32_t rdi_9 = 0
    
    if (arg_18 s> 0)
        do
            void* r13_4 = r12_1 + sx.q(rdi_9) * 0x28
            sub_140b0c350(arg2, r13_4, arg4)
            int64_t* r8_11 = *(*arg2 + 8)
            int64_t* rcx_38 = r8_11[1]
            int32_t* r9_7 = *rcx_38
            
            if (&r9_7[1] u> rcx_38[1])
                sub_140b4b3f0(r8_11, r13_4 + 0x10, arg4)
            else
                *(r13_4 + 0x10) = *r9_7
                int64_t* rax_48 = r8_11[1]
                *rax_48 += 4
            
            arg4 = sub_140a1d9d0(*(*arg2 + 8), r13_4 + 0x18, arg4)
            rdi_9 += 1
        while (rdi_9 s< arg_18)
    
    arg1[1].d = 0
    
    if (*(arg1 + 0xc) != r15_2)
        sub_1405a51b0(arg1, r15_2)
    
    result = sx.q(r15_2)
    void* rsi_2 = r12_1 + result * 0x28
    
    if (r12_1 != rsi_2)
        void* rbx_3 = r12_1 + 0x18
        
        do
            bool cond:7_1 = *(rbx_3 + 8) == 0
            var_68 = *(rbx_3 - 0x18)
            int16_t* rdx_29
            
            if (cond:7_1)
                rdx_29 = &data_142d40450
            else
                rdx_29 = *rbx_3
            
            int64_t* rax_49 = sub_140b58260(&arg_20, rdx_29, 1)
            int64_t rdi_10 = sx.q(arg1[1].d)
            int32_t rcx_45 = *(rbx_3 - 8)
            int64_t var_40_2 = *rax_49
            int32_t rax_51 = (rdi_10 + 1).d
            int32_t var_44_2 = 1
            arg1[1].d = rax_51
            
            if (rax_51 s> *(arg1 + 0xc))
                sub_1405c4e40(arg1)
            
            int64_t rax_52 = *arg1
            rbx_3 += 0x28
            int64_t rcx_48 = rdi_10 << 5
            *(rcx_48 + rax_52) = var_68
            *(rcx_48 + rax_52 + 0x10) = rcx_45.o
            result = rbx_3 - 0x18
        while (result != rsi_2)
    
    if (r15_2 != 0)
        void* rbx_4 = r12_1 + 0x18
        int32_t i_2
        
        do
            int64_t rcx_49 = *rbx_4
            
            if (rcx_49 != 0)
                result = sub_140a74f90(rcx_49)
            
            rbx_4 += 0x28
            i_2 = r15_2
            r15_2 -= 1
        while (i_2 != 1)
    
label_140b53ae7:
    
    if (r12_1 != 0)
        return sub_140a74f90(r12_1)
else
    if (arg3 == 2 || arg3 != 3)
        void* rax_11 = *arg2
        arg_18 = 0
        r12_1 = nullptr
        var_78 = nullptr
        int32_t r13_1 = 0
        int32_t var_6c_1 = 0
        int64_t* r9_2 = *(rax_11 + 8)
        int64_t* rcx_8 = r9_2[1]
        int32_t* rdx_7 = *rcx_8
        int32_t r9_4
        
        if (&rdx_7[1] u> rcx_8[1])
            void* rax_15 = *r9_2
            
            if ((*(r9_2 + 0x29) & 0x20) != 0)
                int64_t r10_1 = *(rax_15 + 0x150)
                
                if ((r9_2[5].b & 1) == 0)
                    arg_20 = 0
                    r10_1(r9_2, &arg_20, 4)
                    r9_4 = arg_18
                else
                    r10_1(r9_2, &arg_18, 4)
                    r9_4 = _bswap(arg_18)
                    arg_18 = r9_4
            else
                (*(rax_15 + 0x150))(r9_2, &arg_18, 4)
                r9_4 = arg_18
        else
            arg_18 = *rdx_7
            int64_t* rax_14 = r9_2[1]
            *rax_14 += 4
            r9_4 = arg_18
        
        if ((*((*arg2)[1] + 0x28) & 1) != 0)
            int32_t var_70_1
            
            if (r9_4 s> 0)
                var_70_1 = r9_4
                sub_1409da2a0(&var_78)
            label_140b536fc:
                r9_4 = arg_18
                r12_1 = var_78
                r13_1 = var_70_1
            else if (r9_4 s< 0)
                result = zx.q(neg.d(r9_4))
                
                if (result.d != 0)
                    int32_t rdi_5 = neg.d(result.d)
                    
                    if (rdi_5 != r9_4)
                        memmove(sx.q(r9_4) << 3, sx.q(result.d + r9_4) << 3, (rdi_5 - r9_4) << 3)
                    
                    var_70_1 = rdi_5
                    sub_140b52ac0(&var_78)
                    goto label_140b536fc
        
        int32_t rdi_6 = 0
        
        if (r9_4 s> 0)
            do
                int32_t* r15_1 = r12_1 + (sx.q(rdi_6) << 3)
                int64_t* r8_6 = *(*arg2 + 8)
                int64_t* rcx_17 = r8_6[1]
                int32_t* rdx_14 = *rcx_17
                
                if (&rdx_14[1] u> rcx_17[1])
                    sub_140b4b3f0(r8_6, r15_1, arg4)
                else
                    *r15_1 = *rdx_14
                    int64_t* rax_22 = r8_6[1]
                    *rax_22 += 4
                
                int64_t* r8_7 = *(*arg2 + 8)
                int64_t* rcx_19 = r8_7[1]
                int32_t* r9_5 = *rcx_19
                
                if (&r9_5[1] u> rcx_19[1])
                    sub_140b4b3f0(r8_7, &r15_1[1], arg4)
                else
                    r15_1[1] = *r9_5
                    result = r8_7[1]
                    *result += 4
                
                rdi_6 += 1
            while (rdi_6 s< arg_18)
        
        arg1[1].d = 0
        
        if (*(arg1 + 0xc) != r13_1)
            sub_1405a51b0(arg1, r13_1)
        
        int32_t rdi_7 = 0
        
        while (true)
            if (rdi_7 s< 0 || rdi_7 s>= r13_1)
                result.b = 0
            else
                result.b = 1
            
            if (result.b == 0)
                break
            
            int64_t rax_26 = sx.q(rdi_7)
            uint64_t r8_8 = zx.q(*(r12_1 + (rax_26 << 3)))
            int32_t var_6c_2 = r8_8.d
            var_78 = nullptr
            int32_t var_70_2 = 0
            sub_140a2e390(&var_68, u"EnumTag%u", r8_8)
            int16_t* const rdx_18 = &data_142d40450
            
            if (var_68:8.d != 0)
                rdx_18 = var_68.q
            
            int64_t* rax_27 = sub_140b58260(&arg_20, rdx_18, 1)
            int32_t rcx_24 = *(r12_1 + (rax_26 << 3) + 4)
            int64_t rcx_25 = var_68.q
            int64_t var_40_1 = *rax_27
            int32_t var_44_1 = 1
            
            if (rcx_25 != 0)
                sub_140a74f90(rcx_25)
            
            int64_t rbx_2 = sx.q(arg1[1].d)
            int32_t rax_29 = (rbx_2 + 1).d
            arg1[1].d = rax_29
            
            if (rax_29 s> *(arg1 + 0xc))
                sub_1405c4e40(arg1)
            
            result = *arg1
            int128_t* rcx_28 = rbx_2 << 5
            rdi_7 += 1
            *(rcx_28 + result) = var_78.o
            *(rcx_28 + result + 0x10) = rcx_24.o
        
        goto label_140b53ae7
    
    void* rax = *arg2
    int32_t rdx = arg1[1].d
    arg_18 = rdx
    int64_t* r9 = *(rax + 8)
    int64_t* rcx = r9[1]
    int32_t* r8_2 = *rcx
    
    if (&r8_2[1] u<= rcx[1])
        arg_18 = *r8_2
        int64_t* rax_3 = r9[1]
        *rax_3 += 4
    else if ((*(r9 + 0x29) & 0x20) == 0)
        (*(*r9 + 0x150))(r9, &arg_18, 4)
    else if ((r9[5].b & 1) == 0)
        arg_20 = _bswap(rdx)
        (*(*r9 + 0x150))(r9, &arg_20, 4)
    else
        (*(*r9 + 0x150))(r9, &arg_18, 4)
        arg_18 = _bswap(arg_18)
    
    result = *arg2
    
    if ((*(result[1] + 0x28) & 1) != 0)
        r8_2.b = 1
        result = sub_140b552f0(arg1, arg_18, r8_2.b)
    
    int32_t rsi_1 = 0
    
    if (arg_18 s> 0)
        do
            int32_t* rdi_3 = (sx.q(rsi_1) << 5) + *arg1
            sub_140b0c350(arg2, rdi_3, arg4)
            int64_t* r8_3 = *(*arg2 + 8)
            int64_t* rcx_6 = r8_3[1]
            int32_t* r9_1 = *rcx_6
            
            if (&r9_1[1] u> rcx_6[1])
                result = sub_140b4b3f0(r8_3, &rdi_3[4], arg4)
            else
                rdi_3[4] = *r9_1
                result = r8_3[1]
                *result += 4
            
            rsi_1 += 1
        while (rsi_1 s< arg_18)
return result
