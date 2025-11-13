// 函数: sub_1409014d0
// 地址: 0x1409014d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_a4 = 1
int32_t var_98 = 0xffffffff
int32_t r11 = arg1[5].d
void* var_a0 = &arg1[2]
int32_t rcx = 0
int32_t var_a8 = 0
int64_t var_94 = 0
int32_t r8 = 0

if (r11 != 0)
    void* rax_1 = arg1[4]
    void* r9_1 = &arg1[2]
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_140901578:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_a4_1 = rax_8
        int32_t arg_10 = temp0_1
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_1
        
        var_94.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_94.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_94:4.d = r8
            var_a8 = rcx
            
            if (rdx_3.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
            int32_t var_98_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_140901578
        
        var_94.d = r11

int32_t rdx_4 = arg1[5].d
int32_t r8_3 = rdx_4 s>> 5
int32_t r14 = 0xffffffff << (rdx_4.b & 0x1f)
int32_t r9_3 = rdx_4 & 0xffffffe0
uint64_t* var_88
var_88.d = r8_3
int128_t var_70 = 0xffffffff
int64_t var_40 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_80
var_80:8.d = r14
var_80:0xc.d = rdx_4
var_70.d = r9_3
int64_t* var_60 = arg1.o.q
int128_t var_50 = var_a8.o

if (rdx_4 != r11)
    void* rax_11 = arg1[4]
    void* r10_1 = &arg1[2]
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(r11 - 1)
    int32_t rdx_8 = *(r10_1 + (sx.q(r8_3) << 2)) & r14
    
    if (rdx_8 != 0)
    label_14090165a:
        int32_t rax_18 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t arg_8 = temp0_3
        int32_t rbx_1
        
        if (rax_18 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_3
        
        var_80:0xc.d = r9_3 - rbx_1 + 0x1f
        
        if (r9_3 - rbx_1 + 0x1f s> r11)
            var_80:0xc.d = r11
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            var_70.d = r9_3
            var_88.d = r8_3
            
            if (rcx_5.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = *(r10_1 + (rcx_5 << 2) + 4)
            var_80:8.d = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_14090165a
        
        var_80:0xc.d = r11

while (true)
    int64_t rcx_7 = sx.q(var_50:0xc.d)
    
    if (rcx_7.d == (var_80:8.q u>> 0x20).d && var_50.q == &arg1[2] && var_60 == arg1)
        arg1[0xc].d = arg2
        arg1[1].d = 0
        
        if (*(arg1 + 0xc) != arg2)
            sub_1405a5410(arg1, arg2)
        
        arg1[6].d = 0xffffffff
        *(arg1 + 0x34) = 0
        sub_14059a8e0(&arg1[2], arg2)
        void* result = sub_1409010a0(arg1, arg2, 1)
        
        if (result.b == 0)
            result = zx.q(arg1[9].d)
            
            if (result.d s> 0)
                int64_t r8_5 = 0
                uint64_t i_1 = zx.q(result.d)
                uint64_t i
                
                do
                    void* result_1 = arg1[8]
                    result = &arg1[7]
                    int64_t rdx_15 = (sx.q(arg1[9].d) - 1) & r8_5
                    
                    if (result_1 != 0)
                        result = result_1
                    
                    r8_5 += 1
                    *(result + (rdx_15 << 2)) = 0xffffffff
                    i = i_1
                    i_1 -= 1
                while (i != 1)
        
        arg1[0xb] = 0
        arg1[0xa] = 0
        return result
    
    void* rsi_1 = *(*var_60 + rcx_7 * 0x10)
    
    if (rsi_1 != 0)
        int64_t* rbx_2 = *(rsi_1 + 0x20)
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t rax_24 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (rax_24 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        j_sub_140a74f90(rsi_1)
    
    int32_t var_54
    var_50:8.d &= not.d(var_54)
    void var_58
    sub_14059bdd0(&var_58)
