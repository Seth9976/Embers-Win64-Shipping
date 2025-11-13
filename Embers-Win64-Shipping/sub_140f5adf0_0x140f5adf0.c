// 函数: sub_140f5adf0
// 地址: 0x140f5adf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0

if (*(arg1 - 0x58) != 0)
    int64_t* rcx = *(arg1 - 0x60)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx).b != 0)
        int64_t* rcx_1
        
        if (*(arg1 - 0x58) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg1 - 0x60)
        
        *(arg1 - 0x68) = (*(*rcx_1 + 0x48))(rcx_1)

if (*(arg1 - 0x68) == 0 || *(arg1 + 0x230) == 0)
    return 

int64_t* rcx_2 = *(arg1 + 0x228)

if (rcx_2 == 0 || (*(*rcx_2 + 0x28))(rcx_2).b == 0)
    return 

int64_t* var_40
int128_t var_38
int64_t* rax_17
int64_t rbp_1
int32_t rsi_1

if (*(arg1 + 0x140) - *(arg1 + 0x16c) s<= 0)
    rax_17 = &var_38
    var_38 = zx.o(0)
    rsi_1 = 2
    rbp_1 = 0
else
    void* r10_1 = arg1 + 0x148
    int32_t var_28_1 = 0xffffffff
    int32_t r11_1 = *(r10_1 + 0x18)
    int32_t r8_1 = 0
    int32_t var_24_1 = 0
    int32_t r9_1 = 0
    
    if (r11_1 != 0)
        void* rax_6 = *(r10_1 + 0x10)
        
        if (rax_6 != 0)
            r10_1 = rax_6
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r11_1 - 1)
        int32_t rcx_3 = *r10_1
        int32_t var_24_3
        
        if (rcx_3 != 0)
        label_140f5aef5:
            int32_t rax_13 = neg.d(rcx_3) & rcx_3
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_13)
            int32_t rax_14
            
            if (rax_13 == 0)
                rax_14 = 0x20
            else
                rax_14 = 0x1f - temp0_2
            
            int32_t var_24_2 = r9_1 - rax_14 + 0x1f
            
            if (r9_1 - rax_14 + 0x1f s> r11_1)
                var_24_3 = r11_1
        else
            while (true)
                int64_t rcx_4 = sx.q(r8_1)
                r9_1 += 0x20
                r8_1 += 1
                
                if (rcx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rcx_3 = *(r10_1 + (rcx_4 << 2) + 4)
                int32_t var_28_2 = 0xffffffff
                
                if (rcx_3 != 0)
                    goto label_140f5aef5
            
            var_24_3 = r11_1
    
    void* rax_16 = *(arg1 + 0x138)
    int64_t* rdx_2 = *(rax_16 + 8)
    rbp_1 = *rax_16
    int64_t var_48 = rbp_1
    var_40 = rdx_2
    
    if (rdx_2 != 0)
        rdx_2[1].d += 1
    
    rax_17 = &var_48
    rsi_1 = 1

int64_t* rbx_1 = rax_17[1]
rax_17[1] = 0
*rax_17 = 0

if ((rsi_1.b & 2) != 0)
    int64_t* rdi_1 = var_38:8.q
    rsi_1 &= 0xfffffffd
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp4_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

if ((rsi_1.b & 1) != 0 && var_40 != 0)
    var_40[1].d -= 1
    
    if (var_40[1].d == 1)
        (**var_40)(var_40)
        int32_t temp6_1 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*var_40 + 8))(var_40, 1)

var_38.q = rbp_1
var_38:8.q = rbx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1

sub_140f44720(arg1 + 0x228, &var_38, arg2)

if (rbx_1 == 0)
    return 

rbx_1[1].d -= 1

if (rbx_1[1].d != 1)
    return 

(**rbx_1)(rbx_1)
int32_t temp7_1 = *(rbx_1 + 0xc)
*(rbx_1 + 0xc) -= 1

if (temp7_1 == 1)
    (*(*rbx_1 + 8))(rbx_1, 1)
