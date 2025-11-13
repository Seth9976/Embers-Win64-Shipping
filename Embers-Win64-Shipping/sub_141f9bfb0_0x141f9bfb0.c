// 函数: sub_141f9bfb0
// 地址: 0x141f9bfb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if ((*(arg1 + 0x28)).d f!= *arg2 || (*(arg1 + 0x2c)).d f!= arg2[1])
    result.b = 0
else
    result.b = 1

if (result.b == 0)
    result.b = 0
else
    if ((*(arg1 + 0x30)).d f!= arg2[2] || (*(arg1 + 0x34)).d f!= arg2[3])
        result.b = 0
    else
        result.b = 1
    
    if (result.b == 0)
        result.b = 0
    else
        result.b = 1

if (result.b == 0)
    result.b = 0
else
    if ((*(arg1 + 0x3c)).d f!= arg2[5] || (*(arg1 + 0x40)).d f!= arg2[6])
        result.b = 0
    else
        result.b = 1
    
    if (result.b == 0)
        result.b = 0
    else
        if ((*(arg1 + 0x44)).d f!= arg2[7] || (*(arg1 + 0x48)).d f!= arg2[8])
            result.b = 0
        else
            result.b = 1
        
        if (result.b == 0)
            result.b = 0
        else
            result.b = 1
    
    if (result.b == 0)
        result.b = 0
    else
        if ((*(arg1 + 0x50)).d f!= arg2[0xa] || (*(arg1 + 0x54)).d f!= arg2[0xb])
            result.b = 0
        else
            result.b = 1
        
        if (result.b == 0)
            result.b = 0
        else
            if ((*(arg1 + 0x58)).d f!= arg2[0xc] || (*(arg1 + 0x5c)).d f!= arg2[0xd])
                result.b = 0
            else
                result.b = 1
            
            if (result.b == 0)
                result.b = 0
            else
                if ((*(arg1 + 0x60)).d f!= arg2[0xe] || (*(arg1 + 0x64)).d f!= arg2[0xf])
                    result.b = 0
                else
                    result.b = 1
                
                if (result.b == 0)
                    result.b = 0
                else
                    if ((*(arg1 + 0x68)).d f!= arg2[0x10] || (*(arg1 + 0x6c)).d f!= arg2[0x11])
                        result.b = 0
                    else
                        result.b = 1
                    
                    if (result.b == 0)
                        result.b = 0
                    else
                        result.b = 1

if (result.b == 0)
    int32_t rax = arg2[4]
    *(arg1 + 0x28) = *arg2
    *(arg1 + 0x38) = rax
    result = zx.q(arg2[9])
    *(arg1 + 0x3c) = *(arg2 + 0x14)
    *(arg1 + 0x4c) = result.d
    *(arg1 + 0x50) = *(arg2 + 0x28)
    *(arg1 + 0x60) = *(arg2 + 0x38)
    void* const rbx_1 = *(arg1 + 0x20)
    
    if (rbx_1 == 0)
        rbx_1 = nullptr
    else
        void* rax_1 = sub_1425ae800()
        void* rdx = *(rbx_1 + 0x10)
        result = sx.q(*(rax_1 + 0x38))
        
        if (result.d s> *(rdx + 0x38))
            rbx_1 = nullptr
        else
            uint64_t result_1 = result
            result = *(rdx + 0x30)
            
            if (*(result + (result_1 << 3)) != rax_1 + 0x30)
                rbx_1 = nullptr
    
    *(rbx_1 + 0x28c) = 1

return result
