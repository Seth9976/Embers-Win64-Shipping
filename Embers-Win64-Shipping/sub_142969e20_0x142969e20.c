// 函数: sub_142969e20
// 地址: 0x142969e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rbx = 1
int64_t* rax = sub_14289a060(arg1)
int64_t* rax_1 = sub_14289a660(arg1)

if (arg2 - 1 u<= 0x93)
    switch (arg2)
        case 1
            if (sub_140611e80(arg1) == 0)
                return 0
            
            int32_t rax_6 = sub_1428919c0(rax, *rax, nullptr)
            
            if (rax_6 s<= 0)
                return rax_6
        case 0xc
            int32_t rax_8 = sub_142891c70(sub_14289a060(arg4), rax)
            
            if (rax_8 == 0)
                return rax_8
            
            sub_14289a9b0(arg1, 1)
            return rbx
        case 0x65
            sub_142899cc0(arg1, 0xf)
            rbx = sub_142899cf0(rax_1, arg2, arg3, arg4)
            sub_142899cd0(arg1)
            return rbx
        case 0x6f
            int32_t rax_13 = sub_1428919c0(rax, arg4, nullptr)
            
            if (rax_13 s> 0)
                sub_14289a9b0(arg1, 1)
            
            return rax_13
        case 0x70
            if (sub_140611e80(arg1) == 0)
                return 0
            
            *arg4 = *rax
            return rbx
        case 0x78
            *arg4 = rax
            sub_14289a9b0(arg1, 1)
            return rbx
        case 0x94
            if (sub_140611e80(arg1) == 0)
                return 0
            
            sub_14289a990(arg1, arg4)
            return rbx

return sub_142899cf0(rax_1, arg2, arg3, arg4)
