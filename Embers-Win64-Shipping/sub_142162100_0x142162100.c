// 函数: sub_142162100
// 地址: 0x142162100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 0
int32_t r11 = *(arg1 + 0x388)
void* r9 = arg1 + 0x370
int32_t var_78 = 0
int32_t rcx = 0
int32_t var_74 = 1
void* var_70 = r9
int32_t var_68 = 0xffffffff
int64_t var_64 = 0

if (r11 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9
    
    if (rdx_2 != 0)
    label_1421621a8:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_74_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_64.d = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r11)
            var_64.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            var_64:4.d = rcx
            var_78 = r8
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9 + (rdx_3 << 2) + 4)
            var_68 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_1421621a8
        
        var_64.d = r11

int64_t* var_10 = arg1 + 0x360
int128_t zmm0 = var_78.o
int128_t var_20 = 0xffffffff
int16_t var_40 = 0
void* rax_11 = zmm0.q
var_68.o = zmm0
var_78.o = (arg1 + 0x360).o
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)

if (0 s< *(rax_11 + 0x18))
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t rdx_6 = sx.q(i) << 5
        int64_t rcx_2 = *var_78.q
        int64_t* rbx_1 = *(rdx_6 + rcx_2 + 0x10)
        
        if (rbx_1 == 0)
            sub_142174440(zmm0:8.q, i)
            var_40.b = 1
        else
            int32_t rax_13 = rbx_1[1].d
            
            if (rax_13 == 0)
                rbx_1 = nullptr
                sub_142174440(zmm0:8.q, i)
                var_40.b = 1
            else
                rbx_1[1].d = rax_13 + 1
                
                if (rbx_1 == 0)
                    sub_142174440(zmm0:8.q, i)
                    var_40.b = 1
                else
                    int64_t rax_15 = *(rdx_6 + rcx_2 + 8)
                    
                    if (rax_15 == 0)
                        sub_142174440(zmm0:8.q, i)
                        var_40.b = 1
                    else if (*(rax_15 + 8) != 0)
                        (*(*arg2 + 0x38))(arg2, rax_15 + 8, *(arg1 + 0x148), 0, var_78)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        var_64:4.d &= not.d(var_70:4.d)
        sub_14059bdd0(&var_70)
        i = i_1
    while (i s< *(var_68.q + 0x18))
    
    if (var_40.b != 0 && var_40:1.b != 0)
        i.b = 1
        sub_140cb1a20(arg1 + 0x360, *(arg1 + 0x368) - *(arg1 + 0x394), i.b)

char result = sub_140d3aab0(arg1 + 0x360)

if (result == 0)
    return result

return sub_1408076e0(arg1 + 0x360)
