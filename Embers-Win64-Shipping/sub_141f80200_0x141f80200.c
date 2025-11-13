// 函数: sub_141f80200
// 地址: 0x141f80200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x10)
int32_t r11 = *(arg1 + 0x68)
int32_t r8 = 0
int32_t var_a4 = 1
int32_t rcx_1 = 0
int32_t var_a8 = 0
int32_t var_98 = 0xffffffff
int64_t var_94 = 0

if (r11 != 0)
    void* rax_1 = *(arg1 + 0x60)
    void* r9_1 = arg1 + 0x50
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_141f802b8:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_a4_1 = rax_8
        int32_t arg_18 = temp0_1
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_1
        
        var_94.d = rcx_1 - rax_9 + 0x1f
        
        if (rcx_1 - rax_9 + 0x1f s> r11)
            var_94.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(r8)
            rcx_1 += 0x20
            r8 += 1
            var_94:4.d = rcx_1
            var_a8 = r8
            
            if (rdx_3.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
            int32_t var_98_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141f802b8
        
        var_94.d = r11

int32_t rdx_5 = *(arg1 + 0x68)
int32_t r8_2 = rdx_5 s>> 5
int32_t r15 = 0xffffffff << (rdx_5.b & 0x1f)
int32_t r9_3 = rdx_5 & 0xffffffe0
void* var_88
var_88.d = r8_2
int128_t var_70 = 0xffffffff
int64_t var_40 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_80
var_80:8.d = r15
var_80:0xc.d = rdx_5
var_70.d = r9_3
int64_t* var_60 = (arg1 + 0x40).o.q
int128_t var_50 = var_a8.o

if (rdx_5 != r11)
    void* rax_11 = *(arg1 + 0x60)
    void* r10_1 = arg1 + 0x50
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(r11 - 1)
    int32_t rdx_9 = *(r10_1 + (sx.q(r8_2) << 2)) & r15
    
    if (rdx_9 != 0)
    label_141f8039a:
        int32_t rax_18 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t arg_20 = temp0_3
        int32_t rdi_1
        
        if (rax_18 == 0)
            rdi_1 = 0x20
        else
            rdi_1 = 0x1f - temp0_3
        
        var_80:0xc.d = r9_3 - rdi_1 + 0x1f
        
        if (r9_3 - rdi_1 + 0x1f s> r11)
            var_80:0xc.d = r11
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            var_70.d = r9_3
            var_88.d = r8_2
            
            if (rcx_6.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r10_1 + (rcx_6 << 2) + 4)
            var_80:8.d = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_141f8039a
        
        var_80:0xc.d = r11

while (true)
    int64_t rax_20 = sx.q(var_50:0xc.d)
    
    if (rax_20.d == (var_80:8.q u>> 0x20).d && var_50.q == arg1 + 0x50 && var_60 == arg1 + 0x40)
        uint64_t result = arg1
        int64_t* i = *(result + 0x90)
        
        for (void* r13_3 = &i[sx.q(*(result + 0x98)) * 2]; i != r13_3; i = &i[2])
            int64_t* rdi_2 = i[1]
            
            if (rdi_2 != 0)
                result = 0
                bool z_1
                
                if (0 == rdi_2[1].d)
                    rdi_2[1].d = 0
                    z_1 = true
                else
                    result = zx.q(rdi_2[1].d)
                    z_1 = false
                
                if (not(z_1))
                    bool z_3
                    
                    do
                        bool z_2
                        
                        if (result.d == rdi_2[1].d)
                            rdi_2[1].d = (result + 1).d
                            z_2 = true
                        else
                            rdi_2[1].d
                            z_2 = false
                        
                        if (z_2)
                            int64_t* rax_27 = *i
                            
                            if (rax_27 != 0 && rax_27[4].b == 0)
                                int64_t j = *rax_27
                                
                                for (int64_t r12_1 = j + (sx.q(rax_27[1].d) << 3); j != r12_1; 
                                        j += 8)
                                    (*(*arg2 + 0x38))(arg2, j, 0, 0, var_a8, arg1 + 0x50, 
                                        0xffffffff)
                            
                            result = zx.q(rdi_2[1].d)
                            rdi_2[1].d -= 1
                            
                            if (result.d == 1)
                                (**rdi_2)(rdi_2)
                                result = zx.q(*(rdi_2 + 0xc))
                                *(rdi_2 + 0xc) -= 1
                                
                                if (result.d == 1)
                                    result = (*(*rdi_2 + 8))(rdi_2, 1)
                            
                            break
                        
                        result = 0
                        
                        if (0 == rdi_2[1].d)
                            rdi_2[1].d = 0
                            z_3 = true
                        else
                            result = zx.q(rdi_2[1].d)
                            z_3 = false
                    while (not(z_3))
        
        if (arg1 == -0x10)
            return result
        
        return LeaveCriticalSection(arg1 + 0x10)
    
    int64_t* rdx_11 = *(*var_60 + rax_20 * 0x28 + 0x10)
    
    if (rdx_11[4].b == 0)
        int64_t i_1 = *rdx_11
        
        for (int64_t rsi_1 = i_1 + (sx.q(rdx_11[1].d) << 3); i_1 != rsi_1; i_1 += 8)
            (*(*arg2 + 0x38))(arg2, i_1, 0, 0, var_a8, arg1 + 0x50, 0xffffffff)
    
    int32_t var_54
    var_50:8.d &= not.d(var_54)
    void var_58
    sub_14059bdd0(&var_58)
