// 函数: sub_140b69590
// 地址: 0x140b69590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x2c40)
void var_2c48
int64_t rax_1 = __security_cookie ^ &var_2c48
uint32_t SizePointer[0x4]
SizePointer[0] = 0x2c00
*arg1 = 0
arg1[1] = 0
struct IP_ADAPTER_INFO AdapterInfo[0xf]
int64_t* result

if (GetAdaptersInfo(&AdapterInfo, &SizePointer) != 0)
    result = arg1
else
    struct IP_ADAPTER_INFO (* rbx_1)[0xf] = &AdapterInfo
    
    while (true)
        int64_t count = sx.q(*(rbx_1 + 0x194))
        
        if (count.d != 0)
            int64_t r14_1 = sx.q(arg1[1].d)
            int32_t rax_3 = (r14_1 + count).d
            arg1[1].d = rax_3
            
            if (rax_3 s> *(arg1 + 0xc))
                sub_1405daba0(arg1)
            
            memset(r14_1 + *arg1, 0, count)
            memcpy(*arg1, rbx_1 + 0x198, *(rbx_1 + 0x194))
            result = arg1
            break
        
        rbx_1 = *rbx_1
        
        if (rbx_1 == 0)
            result = arg1
            break

__security_check_cookie(rax_1 ^ &var_2c48)
return result
