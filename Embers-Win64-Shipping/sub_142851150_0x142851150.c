// 函数: sub_142851150
// 地址: 0x142851150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
uint64_t arg_30
uint64_t rdi = arg_30

if (arg1[1] == 0)
    sub_1428a5670(0x14, 0x18a, 0xaf, "ssl\ssl_lib.c", 0x12e)
    return 0xffffffff

if (rdi.d s< 0 || rdi != sx.q(rdi.d))
    sub_1428a5670(0x14, 0x18a, 0xbd, "ssl\ssl_lib.c", 0x133)
    return 0

if (arg2 u> 3)
    sub_1428a5670(0x14, 0x18a, 0xb8, "ssl\ssl_lib.c", 0x138)
    return 0

if (arg3 u> 1)
    sub_1428a5670(0x14, 0x18a, 0xca, "ssl\ssl_lib.c", 0x13d)
    return 0

if (arg4 != 0)
    int64_t* rax_5 = *arg1
    void* rcx_1
    
    if (arg4 u<= rax_5[2].b)
        rcx_1 = *(*rax_5 + (zx.q(arg4) << 3))
    
    if (arg4 u> rax_5[2].b || rcx_1 == 0)
        sub_1428a5670(0x14, 0x18a, 0xc8, "ssl\ssl_lib.c", 0x144)
        return 0
    
    if (rdi != sx.q(sub_1428916c0(rcx_1)))
        sub_1428a5670(0x14, 0x18a, 0xc0, "ssl\ssl_lib.c", 0x14a)
        return 0

if (arg5 == 0)
    sub_1428a5670((arg5 + 0x14).d, 0x18a, 0xcb, "ssl\ssl_lib.c", 0x14e)
    return 0

char* rax_11 = sub_1428a6a70(0x20)
int32_t var_48_1

if (rax_11 != 0)
    *rax_11 = arg2
    rax_11[1] = arg3
    rax_11[2] = arg4
    int64_t rax_12 = sub_1428a6730(rdi)
    *(rax_11 + 8) = rax_12
    
    if (rax_12 != 0)
        memcpy(rax_12, arg5, rdi.d)
        int32_t rbx_1 = 0
        *(rax_11 + 0x10) = rdi
        
        if (arg4 != 0)
            goto label_14285142b
        
        int64_t arg_8 = arg5
        arg_30 = 0
        void* var_38 = nullptr
        
        if (arg3 != 0)
            if (zx.d(arg3) != 1)
                goto label_14285142b
            
            void* rax_13 = sub_1428a28f0(&var_38, &arg_8, rdi.d)
            int64_t rax_14
            
            if (rax_13 != 0)
                rax_14 = arg_8
            
            if (rax_13 == 0 || rax_14 u< arg5 || rdi != rax_14 - arg5)
                sub_142852b80(rax_11)
                sub_1428a5670(0x14, 0x18a, 0xc9, "ssl\ssl_lib.c", 0x191)
                return 0
            
            if (arg2 != 2)
                sub_1428965a0(var_38)
            else
                *(rax_11 + 0x18) = var_38
            
            goto label_14285142b
        
        int64_t rax_22 = sub_1428a2d00(&arg_30, &arg_8, rdi.d)
        int64_t rax_23
        
        if (rax_22 != 0)
            rax_23 = arg_8
        
        int32_t var_48_2
        
        if (rax_22 == 0 || rax_23 u< arg5 || rdi != rax_23 - arg5)
            sub_142852b80(rax_11)
            var_48_2 = 0x16e
        label_142851610:
            sub_1428a5670(0x14, 0x18a, 0xb4, "ssl\ssl_lib.c", var_48_2)
            return 0
        
        if (sub_1428a38c0(arg_30) == 0)
            sub_142852b80(rax_11)
            var_48_2 = 0x173
            goto label_142851610
        
        if (((1 << arg2).b & 5) != 0)
            int32_t* rax_27 = arg1[2]
            
            if (rax_27 == 0)
                rax_27 = sub_142898ba0()
                arg1[2] = rax_27
                
                if (rax_27 == 0)
                label_1428515e1:
                    sub_1428a5670(0x14, 0x18a, 0x41, "ssl\ssl_lib.c", 0x186)
                    sub_1428a2c50(arg_30)
                    sub_142852b80(rax_11)
                    return 0xffffffff
            
            if (sub_142898d50(rax_27, arg_30) != 0)
                goto label_14285142b
            
            goto label_1428515e1
        
        sub_1428a2c50(arg_30)
    label_14285142b:
        int32_t rax_17 = sub_142898c70(arg1[1])
        
        if (rax_17 s> 0)
            do
                char* rax_18 = sub_142898ea0(arg1[1], rbx_1)
                char rcx_11 = *rax_18
                
                if (rcx_11 u<= arg2)
                    if (rcx_11 u< arg2)
                        break
                    
                    char rcx_12 = rax_18[1]
                    
                    if (rcx_12 u<= arg3)
                        if (rcx_12 u< arg3)
                            break
                        
                        int64_t r9 = *(*arg1 + 8)
                        
                        if (*(zx.q(rax_18[2]) + r9) u<= *(zx.q(arg4) + r9))
                            break
                
                rbx_1 += 1
            while (rbx_1 s< rax_17)
        
        if (sub_142898a60(arg1[1], rax_11, rbx_1) != 0)
            arg1[5].d |= 1 << (zx.d(arg2) u% 0x20)
            return 1
        
        sub_142852b80(rax_11)
        sub_1428a5670(0x14, 0x18a, 0x41, "ssl\ssl_lib.c", 0x1c3)
        return 0xffffffff
    
    sub_142852b80(rax_11)
    var_48_1 = 0x15d
else
    var_48_1 = 0x153

sub_1428a5670(0x14, 0x18a, 0x41, "ssl\ssl_lib.c", var_48_1)
return 0xffffffff
