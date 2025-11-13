// 函数: sub_14285eef0
// 地址: 0x14285eef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x48)
int32_t* r9 = *(arg1 + 8)
uint32_t rdi = 0
int32_t rbp = *(arg2 + 4)
int32_t rax = *r9
arg1[0x179] = rbp
void* const rbx

if (rax == 0x10000)
    rbx = &data_1434dbff0
else if (rax == 0x1ffff)
    rbx = &data_1434dc080
else
    int32_t rax_2
    
    if ((*(*(r9 + 0xc0) + 0x60) & 8) == 0)
        rax_2 = *r9
    
    if ((*(*(r9 + 0xc0) + 0x60) & 8) != 0 || rax_2 s< 0x304 || rax_2 == 0x10000)
        if (sub_1428615b0(arg1, rbp, *arg1) s< 0)
            return 0x10a
        
        *arg3 = 0
        return 0
    
    rbx = &data_1434dbff0

void* rcx = *(arg2 + 0x288)

if (*(rcx + 0x2b8) != 0)
    if ((*(*(r9 + 0xc0) + 0x60) & 8) != 0)
    label_14285f140:
        int32_t rcx_5
        
        if (rbp != 0x304)
            rcx_5 = 1
            
            if ((*(*(r9 + 0xc0) + 0x60) & 8) != 0)
                int32_t rax_17 = rbp
                
                if (rbp == 0x100)
                    rax_17 = 0xff00
                
                if (rax_17 s> 0x304)
                    rcx_5 = -1
            else if (rbp s< 0x304)
                rcx_5 = -1
        
        if (rbp == 0x304 || rcx_5 s>= 0)
            rbp = 0x303
        
        if (*rbx == 0)
        label_14285f1f4:
            
            if (rdi != 0)
                return 0x102
            
            return 0x18c
        
        while (true)
            int64_t r8_3 = *(rbx + 0x10)
            
            if (r8_3 != 0)
                int32_t rdx_7 = *rbx
                
                if (rbp == rdx_7)
                label_14285f1cf:
                    int32_t* rax_20 = r8_3()
                    
                    if (sub_14285f490(arg1, rax_20) == 0)
                        sub_14285dca0(arg1, *rbx, arg3)
                        *arg1 = *rbx
                        *(arg1 + 8) = rax_20
                        break
                    
                    rdi = 1
                else
                    int32_t rcx_7 = 1
                    
                    if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) != 0)
                        int32_t rax_19 = rbp
                        
                        if (rdx_7 == 0x100)
                            rdx_7 = 0xff00
                        
                        if (rbp == 0x100)
                            rax_19 = 0xff00
                        
                        if (rax_19 s> rdx_7)
                            rcx_7 = -1
                    else if (rbp s< rdx_7)
                        rcx_7 = -1
                    
                    if (rcx_7 s>= 0)
                        goto label_14285f1cf
            
            rbx += 0x18
            
            if (*rbx == 0)
                goto label_14285f1f4
        
        return 0
    
    *(rcx + 0x2bc) = 1
    uint128_t zmm0 = *(rcx + 0x2a8)
    int64_t arg_8 = 0
    int64_t rdx_1 = _mm_bsrli_si128(zmm0, 8).q
    
    if (rdx_1 == 0)
        return 0x9f
    
    char* rax_7 = zmm0.q
    uint128_t var_48_1
    var_48_1:8.q = rdx_1 - 1
    uint64_t i = zx.q(*rax_7)
    void* r15_1 = &rax_7[1]
    var_48_1.q = r15_1
    
    if (rdx_1 - 1 u< i)
        return 0x9f
    
    var_48_1.q = r15_1 + i
    var_48_1:8.q = rdx_1 - 1 - i
    
    if (rdx_1 - 1 != i)
        return 0x9f
    
    *(rcx + 0x2a8) = var_48_1
    
    if (rbp s<= 0x300)
        return 0x124
    
    while (i u>= 2)
        uint32_t rax_10 = zx.d(*r15_1)
        i -= 2
        uint32_t rbx_1 = zx.d(*(r15_1 + 1))
        r15_1 += 2
        uint32_t rbx_2 = rbx_1 | rax_10 << 8
        
        if (rbx_2 != rdi)
            int32_t rdx_4 = 1
            
            if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) != 0)
                uint32_t rcx_2 = rbx_2
                uint32_t rax_13 = rdi
                
                if (rbx_2 == 0x100)
                    rcx_2 = 0xff00
                
                if (rdi == 0x100)
                    rax_13 = 0xff00
                
                if (rcx_2 s> rax_13)
                    rdx_4 = -1
            else if (rbx_2 s< rdi)
                rdx_4 = -1
            
            if (rdx_4 s> 0 && sub_14285f6a0(arg1, rbx_2, &arg_8) != 0)
                rdi = rbx_2
    
    if (i != 0)
        return 0x9f
    
    if (rdi != 0)
        if (arg1[0x136] == i.d)
            sub_14285dca0(arg1, rdi, arg3)
            *(arg1 + 8) = arg_8
            *arg1 = rdi
            return 0
        
        if (rdi == 0x304)
            return 0
else if (arg1[0x136] == 0)
    goto label_14285f140

return 0x102
