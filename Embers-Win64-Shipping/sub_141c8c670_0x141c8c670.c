// 函数: sub_141c8c670
// 地址: 0x141c8c670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141c8c590(arg1 + 0x118)
sub_141bdc410(arg1 + 0x168)
int32_t r8 = 0
int32_t var_a4 = 1
void* r14 = arg1 + 8
int32_t var_a8 = 0
int32_t rbx = *(r14 + 0x28)
void* r13 = r14 + 0x10
int32_t rcx_2 = 0
void* arg_10 = r14
void* var_a0 = r13
int32_t var_98 = 0xffffffff
int64_t var_94 = 0

if (rbx != 0)
    void* rax_1 = *(r13 + 0x10)
    void* r9_1 = r13
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_141c8c738:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_a4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_94.d = rcx_2 - rax_9 + 0x1f
        
        if (rcx_2 - rax_9 + 0x1f s> rbx)
            var_94.d = rbx
    else
        while (true)
            int64_t rdx_4 = sx.q(r8)
            rcx_2 += 0x20
            r8 += 1
            var_94:4.d = rcx_2
            var_a8 = r8
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            int32_t var_98_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141c8c738
        
        var_94.d = rbx

int32_t rdx_6 = *(r14 + 0x28)
int128_t var_48 = 0xffffffff
int32_t rsi = 0xffffffff << (rdx_6.b & 0x1f)
int128_t var_58 = var_a8.o
int32_t r8_2 = rdx_6 s>> 5
int32_t r9_3 = rdx_6 & 0xffffffe0
int64_t var_68 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_98_2 = rsi
var_94.d = rdx_6
int128_t var_88 = r14.o
int128_t var_78 = var_58

if (rdx_6 != rbx)
    void* rax_11 = *(r13 + 0x10)
    void* r10_1 = r13
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx - 1)
    int32_t rdx_10 = *(r10_1 + (sx.q(r8_2) << 2)) & rsi
    
    if (rdx_10 != 0)
    label_141c8c802:
        int32_t rax_18 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t r11_1
        
        if (rax_18 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_94.d = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rbx)
            var_94.d = rbx
    else
        while (true)
            int64_t rcx_7 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            
            if (rcx_7.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = *(r10_1 + (rcx_7 << 2) + 4)
            var_98_2 = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_141c8c802
        
        var_94.d = rbx

while (true)
    int64_t rax_20 = sx.q(var_78:0xc.d)
    int64_t* rdx_11 = var_88.q
    
    if (rax_20.d == (var_98_2.q u>> 0x20).d && var_78.q == r13 && rdx_11 == r14)
        return sub_140599090(arg1 + 0x1f8) __tailcall
    
    int64_t rcx_9 = rax_20 * 5
    int64_t rax_21 = *rdx_11
    void* r14_1 = *(rax_21 + (rcx_9 << 3) + 0x10)
    
    if (*(r14_1 + 0x64) s< 0)
        sub_14095cd40(r14_1 + 0x58, 0)
    else
        int32_t i_2 = *(r14_1 + 0x60)
        
        if (i_2 != 0)
            int64_t* rdi_2 = *(r14_1 + 0x58) + 8
            int32_t i
            
            do
                int64_t* rbx_1 = *rdi_2
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp6_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp6_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
                
                rdi_2 = &rdi_2[2]
                i = i_2
                i_2 -= 1
            while (i != 1)
        
        *(r14_1 + 0x60) = 0
    
    void* r14_2 = *(rax_21 + (rcx_9 << 3) + 0x10)
    
    if (*(r14_2 + 0x7c) s< 0)
        sub_14095cd40(r14_2 + 0x70, 0)
    else
        int32_t i_3 = *(r14_2 + 0x78)
        
        if (i_3 != 0)
            int64_t* rdi_4 = *(r14_2 + 0x70) + 8
            int32_t i_1
            
            do
                int64_t* rbx_2 = *rdi_4
                
                if (rbx_2 != 0)
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        (**rbx_2)(rbx_2)
                        int32_t temp9_1 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (temp9_1 == 1)
                            (*(*rbx_2 + 8))(rbx_2, 1)
                
                rdi_4 = &rdi_4[2]
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
        
        *(r14_2 + 0x78) = 0
    
    var_78:8.d &= not.d(var_88:0xc.d)
    sub_14059bdd0(&var_88:8)
    r14 = arg_10
