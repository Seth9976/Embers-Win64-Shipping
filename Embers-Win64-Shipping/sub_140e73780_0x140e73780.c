// 函数: sub_140e73780
// 地址: 0x140e73780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg2 + 0x50))
char r10 = 0
int32_t* rcx_5

if (*(arg1 + 0x188) == *(arg1 + 0x1b4))
label_140e7381d:
    rcx_5 = nullptr
else
    void* rdx = *(arg1 + 0x1c0)
    void* r8 = arg1 + 0x1b8
    
    if (rdx != 0)
        r8 = rdx
    
    int32_t rax_1 = *(r8 + (((sx.q(*(arg1 + 0x1c8)) - 1) & rdi) << 2))
    
    if (rax_1 == 0xffffffff)
    label_140e7381d_1:
        rcx_5 = nullptr
    else
        while (true)
            rcx_5 = sx.q(rax_1) * 0x58 + *(arg1 + 0x180)
            
            if (*rcx_5 == rdi.d)
                break
            
            rax_1 = rcx_5[0x14]
            
            if (rax_1 == 0xffffffff)
                goto label_140e7381d_2
        
        if (rax_1 == 0xffffffff)
        label_140e7381d_2:
            rcx_5 = nullptr

void* rax_2 = &rcx_5[2]

if (rcx_5 == 0)
    rax_2 = nullptr

int64_t* rbx
int64_t rsi

if (rax_2 == 0)
    rbx = 0.q
    rsi.b = 0
else
    rbx = *(arg2 + 0x48)
    
    if (rbx != 0)
        rbx[1].d += 1
    
    r10 = 1
    
    if (*(rax_2 + 0x28) != *(arg2 + 0x38))
        rsi.b = 0
    else
        rsi = 1

if ((r10 & 1) != 0 && rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

if (rsi.b != 0)
    sub_140e85710(arg1 + 0x180, rdi.d)

uint64_t result = sub_140e6a060(arg1, rdi.d)

if (result.b == 0)
    if (*(arg2 + 0x5c) != result.b)
        result = data_143e29f28
        
        if (*(result + 0x438) == 0 && *(result + 0x439) == 0)
            int32_t rax_5 = *(arg3 + 0x130)
            result = zx.q(rax_5 - 1)
            int64_t rbx_1 = sx.q(result.d)
            
            if (rax_5 - 1 s>= 0)
                int64_t rsi_2 = rbx_1 * 0x48
                int64_t temp7_1
                
                do
                    void* rax_6 = *(arg3 + 0x128)
                    void* rcx_11 = arg3 + 8
                    
                    if (rax_6 != 0)
                        rcx_11 = rax_6
                    
                    int64_t* rcx_12 = *(rcx_11 + rsi_2 + 0x38)
                    result = (*(*rcx_12 + 0x80))(rcx_12, arg2)
                    temp7_1 = rbx_1
                    rbx_1 -= 1
                    rsi_2 -= 0x48
                while (temp7_1 - 1 s>= 0)
    
    int64_t* rcx_13 = *arg4
    
    if (rcx_13 != 0)
        result = (*(*rcx_13 + 8))(rcx_13, arg2)
        
        if (result.b != 0)
            void** var_98
            sub_140e51390(&var_98, arg2)
            int64_t* rcx_15 = *arg4
            void* var_88_1 = arg3
            (*(*rcx_15 + 0x10))(rcx_15, zx.q(arg5), &var_98)
            result = sub_140e85900(arg1 + 0x1f0, rdi.d)
            int64_t* var_50
            
            if (var_50 != 0)
                var_50[1].d -= 1
                
                if (var_50[1].d == 1)
                    result = (**var_50)(var_50)
                    int32_t temp6_1 = *(var_50 + 0xc)
                    *(var_50 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        result = (*(*var_50 + 8))(var_50, 1)

if (*(arg2 + 0x5c) != 0)
    if (rdi.d s< 0xb)
        int64_t rcx_19 = rdi * 3
        
        if (*(arg1 + (rcx_19 << 3) + 0x2d0) != 0)
            *(arg1 + (rcx_19 << 3) + 0x2d0) = 0
        
        *(arg1 + (rcx_19 << 3) + 0x2d8) = 0
    
    sub_140e85470(arg1, rdi.d)
    sub_140e85810(arg1 + 0x90, rdi.d)
    sub_140e85810(arg1 + 0xe0, rdi.d)
    result = sub_140e85900(arg1 + 0x1f0, rdi.d)

int64_t* rbx_3 = arg4[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t temp3_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*rbx_3 + 8))(rbx_3, 1)

return result
