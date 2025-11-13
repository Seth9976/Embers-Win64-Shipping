// 函数: sub_142895580
// 地址: 0x142895580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t rbx = arg4
void* rax = sub_142890ec0(arg1)
int32_t rsi
rsi.b = sub_142890ed0(arg1) == 4

if (arg3 != 0)
    if (rbx == 0)
        return 0xffffffff
    
    uint64_t rax_4
    
    if (sub_142890eb0(arg1) != 0)
        rax_4 = zx.q(rbx.d) & 7
    else
        if (rbx u< 0x10)
            return 0xffffffff
        
        rax_4 = zx.q(rbx.d) & 7
        
        if (rax_4.d != 0)
            return 0xffffffff
    
    if (rsi == 0 && rax_4 != 0)
        return 0xffffffff
    
    if (sub_142893020(arg2, arg3, rbx.d) == 0)
        int32_t rax_7 = sub_142890eb0(arg1)
        
        if (arg2 == 0)
            if (rax_7 == 0)
                return zx.q((rbx - 8).d)
            
            if (rsi != 0)
                rbx = (rbx + 7) & 0xfffffffffffffff8
            
            return zx.q((rbx + 8).d)
        
        int32_t* rdx_1 = *(rax + 0xf8)
        uint64_t result
        int32_t var_28
        
        if (rsi == 0)
            if (rax_7 == 0)
                var_28.q = rbx
                int64_t rax_11 = sub_1428d3f50(rax, rdx_1, arg2, arg3, var_28, sub_1428ce380)
                result = 0xffffffff
                
                if (rax_11 != 0)
                    return zx.q(rax_11.d)
            else
                var_28.q = rbx
                int64_t rax_10 = sub_1428d4150(rax, rdx_1, arg2, arg3, var_28, sub_1428ce970)
                result = 0xffffffff
                
                if (rax_10 != 0)
                    return zx.q(rax_10.d)
        else if (rax_7 == 0)
            var_28.q = rbx
            uint64_t rax_9 = sub_1428d3ff0(rax, rdx_1, arg2, arg3, var_28, sub_1428ce380)
            result = 0xffffffff
            
            if (rax_9 != 0)
                return zx.q(rax_9.d)
        else
            var_28.q = rbx
            int64_t rax_8 = sub_1428d42c0(rax, rdx_1, arg2, arg3, var_28, sub_1428ce970)
            result = 0xffffffff
            
            if (rax_8 != 0)
                return zx.q(rax_8.d)
        return result
    
    sub_1428a5670(6, 0xaa, 0xa2, "crypto\evp\e_aes.c", 0xeae)

return 0
