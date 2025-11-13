// 函数: sub_1428bb9f0
// 地址: 0x1428bb9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* rax = sub_14289a660(arg1)

if (arg2 != 0 && arg3 != 0)
    int64_t* rax_1 = sub_14289a060(arg1)
    sub_142899cc0(arg1, 0xf)
    
    if (*rax_1 == 0)
        int64_t rax_2 = sub_1428a6730(sx.q(rax_1[1].d))
        *rax_1 = rax_2
        
        if (rax_2 == 0)
            sub_1428a5670((rax_2 + 0x29).d, (rax_2 + 0x65).d, (rax_2 + 0x41).d, 
                "crypto\comp\c_zlib.c", 0x180)
            return 0
        
        sub_140371c50(&rax_1[2], "1.2.8", 0x58)
        rax_1[2] = *rax_1
        rax_1[3].d = 0
    
    rax_1[4] = arg2
    int32_t i = rax_1[3].d
    rax_1[5].d = arg3
    
    while (i == 0)
    label_1428bbb07:
        int32_t i_1 = sub_14289a950(rax, *rax_1, rax_1[1].d)
        i = i_1
        
        if (i_1 s<= 0)
            int32_t i_2 = arg3 - rax_1[5].d
            sub_142899cd0(arg1)
            
            if (i s>= 0)
                return zx.q(i_2)
            
            if (i_2 s> 0)
                i = i_2
            
            return zx.q(i)
        
        rax_1[3].d = i_1
        rax_1[2] = *rax_1
    
    while (true)
        int32_t rax_5 = sub_140371df0(&rax_1[2], 0)
        
        if (rax_5 != 0)
            if (rax_5 != 1)
                sub_1428a5670(0x29, 0x65, 0x64, "crypto\comp\c_zlib.c", 0x190)
                sub_140374310(rax_5)
                sub_1428a4880(2)
                return 0
        else if (rax_1[5].d != rax_5)
            if (rax_1[3].d == rax_5)
                goto label_1428bbb07
            
            continue
        
        return zx.q(arg3 - rax_1[5].d)

return 0
