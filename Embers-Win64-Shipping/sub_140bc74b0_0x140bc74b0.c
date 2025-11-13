// 函数: sub_140bc74b0
// 地址: 0x140bc74b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_143e1a8a0)
int32_t r10 = (data_1439a98d8).d
void* r11 = &data_1439a98c0
int32_t var_94 = 1
void* var_90 = &data_1439a98c0
int32_t rcx = 0
int32_t var_98 = 0
int32_t var_88 = 0xffffffff
int32_t r8 = 0
int64_t var_84 = 0

if (r10 != 0)
    void* rax_1 = data_1439a98d0
    
    if (rax_1 != 0)
        r11 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_3 = *r11
    
    if (rdx_3 != 0)
    label_140bc7555:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_94_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_84.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r10)
            var_84.d = r10
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_84:4.d = r8
            var_98 = rcx
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r11 + (rdx_4 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_140bc7555
        
        var_84.d = r10

int64_t* var_50 = &data_1439a98b0
int128_t var_38 = 0xffffffff
int128_t zmm0 = var_50.o
var_84.d = r10
int64_t temp0_3 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_78 = zmm0
int96_t var_68 = var_98.o:8.12
int64_t var_58 = temp0_3

while (true)
    int32_t var_5c
    int64_t rax_11 = sx.q(var_5c)
    int64_t* rdx_5 = var_78.q
    
    if (rax_11.d == ((0xffffffff << (r10.b & 0x1f)).q u>> 0x20).d && var_68.q == &data_1439a98c0
            && rdx_5 == &data_1439a98b0)
        return LeaveCriticalSection(&data_143e1a8a0) __tailcall
    
    int64_t rcx_4 = rax_11 * 3
    int64_t rax_12 = *rdx_5
    int64_t* rbx_1 = rax_12 + (rcx_4 << 3)
    
    if (*(*(rax_12 + (rcx_4 << 3) + 8) + 8) != 0)
        sub_140accdf0(&var_50, rbx_1)
        sub_140acec90(&var_50, rbx_1[1])
        int64_t* r14_1 = rbx_1[1]
        int32_t i_2 = r14_1[1].d
        int32_t i_1 = i_2
        
        if (i_2 != 0)
            int64_t* rdi_2 = *r14_1 + 8
            int32_t i
            
            do
                int64_t* rbx_2 = *rdi_2
                
                if (rbx_2 != 0)
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        (**rbx_2)(rbx_2)
                        int32_t temp4_1 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (temp4_1 == 1)
                            (*(*rbx_2 + 8))(rbx_2, 1)
                
                rdi_2 = &rdi_2[2]
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        r14_1[1].d = 0
        
        if (*(r14_1 + 0xc) != i_2)
            sub_1405a5410(r14_1, i_2)
        
        sub_140acd9c0(&var_50)
    
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
