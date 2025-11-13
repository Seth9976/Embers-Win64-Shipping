// 函数: sub_1426aabb0
// 地址: 0x1426aabb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int64_t* rbp = arg3
uint64_t rax

if (arg3[0xe].d s> 0)
    int64_t* r14_1 = nullptr
    
    do
        int64_t* rcx = *(r14_1 + rbp[0xd])
        int64_t rdi_2 = zx.q(*(rcx + 0x52)) + *(arg1 + 0x30)
        
        if ((*(rcx + 0x55) & 4) == 0)
            goto label_1426aac33
        
        rax = zx.q((*(*rcx + 0x298))())
        
        if (rax.d != 0)
            int64_t rcx_2 = zx.q((rax + 3).d) & 0xfffffffffffffffc
            
            if (rdi_2 != rcx_2)
                rax = sx.q(*(rdi_2 - rcx_2))
                
                if (rax.d s>= 0 && rax.d s< *(arg2 + 0x138))
                    rcx = *(*(arg2 + 0x130) + (rax << 3))
                label_1426aac33:
                    
                    if (rcx != 0)
                        (*(*rcx + 0x270))(rcx, arg2, rdi_2, zx.q(arg4))
        
        i += 1
        r14_1 = &r14_1[1]
    while (i s< rbp[0xe].d)

int64_t* rcx_4 = rbp
int64_t rdi_4 = zx.q(*(rbp + 0x52)) + *(arg1 + 0x30)

if ((*(rbp + 0x55) & 4) == 0)
    goto label_1426aaca4

rax = zx.q((*(*rbp + 0x298))(rcx_4))

if (rax.d != 0)
    int64_t rcx_6 = zx.q((rax + 3).d) & 0xfffffffffffffffc
    
    if (rdi_4 != rcx_6)
        rax = sx.q(*(rdi_4 - rcx_6))
        
        if (rax.d s>= 0 && rax.d s< *(arg2 + 0x138))
            rcx_4 = *(*(arg2 + 0x130) + (rax << 3))
        label_1426aaca4:
            
            if (rcx_4 != 0)
                (*(*rcx_4 + 0x270))(rcx_4, arg2, rdi_4, zx.q(arg4))

int32_t i_1 = 0
int32_t i_2 = 0

if (rbp[0xc].d s<= 0)
    return 

int64_t rcx_8 = 0
int64_t var_48_1 = 0

do
    int32_t j = 0
    int64_t* r15_2 = rbp[0xb] + rcx_8
    
    if (r15_2[3].d s> 0)
        int64_t rsi = 0
        
        do
            int64_t* rcx_9 = *(rsi + r15_2[2])
            int64_t rbp_2 = zx.q(*(rcx_9 + 0x52)) + *(arg1 + 0x30)
            
            if ((*(rcx_9 + 0x55) & 4) == 0)
                goto label_1426aad53
            
            rax = zx.q((*(*rcx_9 + 0x298))())
            
            if (rax.d != 0)
                int64_t rcx_11 = zx.q((rax + 3).d) & 0xfffffffffffffffc
                
                if (rbp_2 != rcx_11)
                    rax = sx.q(*(rbp_2 - rcx_11))
                    
                    if (rax.d s>= 0 && rax.d s< *(arg2 + 0x138))
                        rcx_9 = *(*(arg2 + 0x130) + (rax << 3))
                    label_1426aad53:
                        
                        if (rcx_9 != 0)
                            (*(*rcx_9 + 0x270))(rcx_9, arg2, rbp_2, zx.q(arg4), var_48_1)
            
            j += 1
            rsi += 8
        while (j s< r15_2[3].d)
        
        rbp = arg3
    
    int64_t r8_3 = *r15_2
    
    if (r8_3 == 0)
        int64_t* rcx_14 = r15_2[1]
        
        if (rcx_14 != 0)
            int32_t j_1 = 0
            
            if (rcx_14[0xc].d s> 0)
                int64_t r14_2 = 0
                
                do
                    int64_t* rcx_15 = *(r14_2 + rcx_14[0xb])
                    int64_t rdi_6 = zx.q(*(rcx_15 + 0x52)) + *(arg1 + 0x30)
                    
                    if ((*(rcx_15 + 0x55) & 4) == 0)
                        goto label_1426aae07
                    
                    rax = zx.q((*(*rcx_15 + 0x298))())
                    
                    if (rax.d != 0)
                        int64_t rcx_17 = zx.q((rax + 3).d) & 0xfffffffffffffffc
                        
                        if (rdi_6 != rcx_17)
                            rax = sx.q(*(rdi_6 - rcx_17))
                            
                            if (rax.d s>= 0 && rax.d s< *(arg2 + 0x138))
                                rcx_15 = *(*(arg2 + 0x130) + (rax << 3))
                            label_1426aae07:
                                
                                if (rcx_15 != 0)
                                    (*(*rcx_15 + 0x270))(rcx_15, arg2, rdi_6, zx.q(arg4), var_48_1)
                    
                    rcx_14 = r15_2[1]
                    j_1 += 1
                    r14_2 += 8
                while (j_1 s< rcx_14[0xc].d)
                
                i_1 = i_2
            
            int64_t rdi_8 = zx.q(*(rcx_14 + 0x52)) + *(arg1 + 0x30)
            
            if ((*(rcx_14 + 0x55) & 4) == 0)
                goto label_1426aae7a
            
            rax = zx.q((*(*rcx_14 + 0x298))())
            
            if (rax.d != 0)
                int64_t rcx_20 = zx.q((rax + 3).d) & 0xfffffffffffffffc
                
                if (rdi_8 != rcx_20)
                    rax = sx.q(*(rdi_8 - rcx_20))
                    
                    if (rax.d s>= 0 && rax.d s< *(arg2 + 0x138))
                        rcx_14 = *(*(arg2 + 0x130) + (rax << 3))
                    label_1426aae7a:
                        
                        if (rcx_14 != 0)
                            (*(*rcx_14 + 0x270))(rcx_14, arg2, rdi_8, zx.q(arg4), var_48_1)
    else
        sub_1426aabb0(arg1, arg2, r8_3, zx.q(arg4), var_48_1)
    
    i_1 += 1
    rcx_8 = var_48_1 + 0x30
    i_2 = i_1
    var_48_1 = rcx_8
while (i_1 s< rbp[0xc].d)
