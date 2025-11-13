// 函数: sub_142131a30
// 地址: 0x142131a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = arg1[0x1a]

if (result != 0 && result == arg2)
    return result

if (arg2 == 0)
label_142131b1f:
    arg1[0x1a] = arg2
    
    if (arg2 != 0)
        arg4 = sub_140cd85e0(arg2)
    
    if (arg3 != 0)
        return sub_14212a140(arg1, arg4)
else
    void* rax
    rax, arg4 = sub_142543020()
    void* rdx = arg2[2]
    int64_t rax_1 = sx.q(*(rax + 0x38))
    int64_t* rbx_1
    
    if (rax_1.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_1 << 3)) == rax + 0x30)
        rbx_1 = arg2
        
        if (arg2 != arg1)
            do
                if (rbx_1 == 0)
                    goto label_142131ad4
                
                void* rax_3
                rax_3, arg4 = sub_142543020()
                void* rdx_1 = rbx_1[2]
                int64_t rax_4 = sx.q(*(rax_3 + 0x38))
                
                if (rax_4.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
                    rbx_1 = nullptr
                else
                    rbx_1 = rbx_1[0x1a]
            while (rbx_1 != arg1)
    
    if (rax_1.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_1 << 3)) != rax + 0x30 || rbx_1 == 0)
    label_142131ad4:
        
        if (arg2 == 0)
            goto label_142131b1f
        
        void* rax_6
        rax_6, arg4 = sub_1425312f0()
        void* rdx_2 = arg2[2]
        int64_t rax_7 = sx.q(*(rax_6 + 0x38))
        
        if (rax_7.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax_7 << 3)) == rax_6 + 0x30)
            goto label_142131b1f
        
        void* rax_9
        rax_9, arg4 = sub_142543880()
        void* rdx_3 = arg2[2]
        int64_t rax_10 = sx.q(*(rax_9 + 0x38))
        
        if (rax_10.d s<= *(rdx_3 + 0x38) && *(*(rdx_3 + 0x30) + (rax_10 << 3)) == rax_9 + 0x30)
            goto label_142131b1f

return sub_142129e50(arg1)
