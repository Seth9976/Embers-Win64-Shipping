// 函数: sub_141ccee50
// 地址: 0x141ccee50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg4)

if (*(arg1 + 0x290) != 0)
    *arg2 = arg3
    arg2[1].d = rbx.d
    *(arg2 + 0xc) = 0
    return arg2

(*(*(arg1 + 0x90) + 0x98))(arg1 + 0x90)
char rax_1 = *(arg1 + 0x21c)

if (rax_1 == 0)
    sub_141ccf650(arg1)
    rax_1 = *(arg1 + 0x21c)

int64_t var_68

if (rax_1 == 2)
    (*(*(arg1 + 0x90) + 0x158))(arg1 + 0x90, arg3, rbx)
    var_68 = 0
    int32_t var_60_1 = 0
    sub_1405947f0(&var_68, 0x11)
    int32_t rax_3 = var_60_1 + 0x11
    var_60_1 = rax_3
    
    if (rax_3 s> 0)
        sub_140594770(&var_68)
    
    int64_t rbx_1 = var_68
    UnDecorator::getReferenceType(rbx_1, u"PrePacketHandler", 0x22)
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)
    
    int32_t rax_4 = *(arg1 + 0x200)
    int32_t rsi_1 = 0
    
    if (rax_4 s> 0)
        int64_t* r15_1 = nullptr
        
        while ((*(arg1 + 0xb9) & 1) == 0)
            int64_t* rbx_2 = *(r15_1 + *(arg1 + 0x1f8))
            
            if ((*(*rbx_2 + 8))(rbx_2) != 0)
                if (*(arg1 + 0x130) s> zx.q(*(rbx_2 + 0x14)))
                    *(arg1 + 0xb9) |= 1
                    rax_4 = *(arg1 + 0x200)
                    break
                
                int64_t rax_9 = *rbx_2
                
                if (arg6 == 0)
                    (*(rax_9 + 0x20))(rbx_2, arg1 + 0x90, arg5)
                else
                    (*(rax_9 + 0x40))(rbx_2, arg7, arg1 + 0x90, arg5)
            
            rax_4 = *(arg1 + 0x200)
            rsi_1 += 1
            r15_1 = &r15_1[2]
            
            if (rsi_1 s>= rax_4)
                break
        
        if (rax_4 s> 0 && *(arg1 + 0x130) s> 0)
            var_68 = 0
            int32_t var_60_2 = 0
            sub_1405947f0(&var_68, 0x12)
            int32_t rax_10 = var_60_2 + 0x12
            var_60_2 = rax_10
            
            if (rax_10 s> 0)
                sub_140594770(&var_68)
            
            int64_t rbx_3 = var_68
            UnDecorator::getReferenceType(rbx_3, u"PostPacketHandler", 0x24)
            
            if (rbx_3 != 0)
                sub_140a74f90(rbx_3)
            
            sub_140b560b0(arg1 + 0x90, 1)
    
    if (arg6 == 0)
        void* rcx_14 = *(arg1 + 0x280)
        
        if (rcx_14 != 0)
            int64_t rax_11 = *(arg1 + 0x130)
            
            if (rax_11 s> 0)
                sub_141ccc950(rcx_14, *(arg1 + 0x120), rax_11.d, arg5)
else if (rax_1 == 1 && rbx.d s> 0)
    int64_t* r15_3 = j_sub_140a82f30(0x48)
    
    if (arg6 == 0)
        if (r15_3 != 0)
            r15_3 = sub_141cccc80(r15_3, arg3, rbx.d, arg5, (zx.o(0)).q, 0)
        
        int64_t rsi_4 = sx.q(*(arg1 + 0x228))
        int32_t rax_23 = (rsi_4 + 1).d
        *(arg1 + 0x228) = rax_23
        
        if (rax_23 s> *(arg1 + 0x22c))
            sub_1405a4d70(arg1 + 0x220)
        
        *(*(arg1 + 0x220) + (rsi_4 << 3)) = r15_3
    else
        if (r15_3 != 0)
            int64_t rax_13 = *arg7
            int64_t* rsi_2 = arg7[1]
            
            if (rsi_2 != 0)
                rsi_2[1].d += 1
            
            r15_3[1].d = rbx.d
            int128_t zmm0_1 = *arg5
            r15_3[4] = 0
            r15_3[5].d = 0
            *(r15_3 + 0xc) = zmm0_1
            r15_3[6] = 0
            r15_3[7] = 0
            uint64_t rbx_5 = zx.q(rbx.d + 7) u>> 3
            r15_3[8] = 0
            int64_t rax_14 = j_sub_140a82f30(rbx_5)
            *r15_3 = rax_14
            memcpy(rax_14, arg3, rbx_5.d)
            var_68 = rax_13
            
            if (rsi_2 != 0)
                rsi_2[1].d += 1
            
            if (&var_68 != &r15_3[6])
                var_68.o = *(r15_3 + 0x30)
                *(r15_3 + 0x30) = var_68.o
            
            if (rsi_2 != 0)
                rsi_2[1].d -= 1
                
                if (rsi_2[1].d == 1)
                    (**rsi_2)(rsi_2)
                    int32_t temp2_1 = *(rsi_2 + 0xc)
                    *(rsi_2 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*rsi_2 + 8))(rsi_2, 1)
            
            if (rsi_2 != 0)
                rsi_2[1].d -= 1
                
                if (rsi_2[1].d == 1)
                    (**rsi_2)(rsi_2)
                    int32_t temp3_1 = *(rsi_2 + 0xc)
                    *(rsi_2 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rsi_2 + 8))(rsi_2, 1)
        
        int64_t rsi_3 = sx.q(*(arg1 + 0x268))
        int32_t rax_20 = (rsi_3 + 1).d
        *(arg1 + 0x268) = rax_20
        
        if (rax_20 s> *(arg1 + 0x26c))
            sub_1405a4d70(arg1 + 0x260)
        
        *(*(arg1 + 0x260) + (rsi_3 << 3)) = r15_3

if ((*(arg1 + 0xb9) & 1) != 0)
    *arg2 = 0
    arg2[1].d = 0
    *(arg2 + 0xc) = 1
    return arg2

int32_t rdx_11 = (*(arg1 + 0x130)).d
*arg2 = *(arg1 + 0x120)
arg2[1].d = rdx_11
*(arg2 + 0xc) = 0
return arg2
