// 函数: sub_142c65060
// 地址: 0x142c65060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = sx.q(arg2)
int64_t (* result)(void** arg1, int32_t arg2, PSTR arg3, int64_t arg4, int512_t arg5 @ zmm2, 
    int32_t* arg6) = arg1[0x87]
SOCKET s = arg1[rcx + 0x47]
void* rbx_2 = &arg1[(rcx + 0x14) * 4]
int64_t rdi_1 = *(rbx_2 + 8) - *(rbx_2 + 0x10)

if ((*(result + 0x7c) & 3) != 0)
    result = sub_142c64ac0
    
    if (arg1[rcx + 0x4c] == sub_142c64ac0 && (*rbx_2 == 0 || rdi_1 != 0))
        result = sub_142c64080(s, -1, -1, 0)
        
        if (result.d != 0xffffffff && (result.b & 1) != 0)
            if (*rbx_2 == 0)
                int64_t rcx_4 = sx.q(*(*arg1 + 0x598) * 2)
                *(rbx_2 + 8) = rcx_4
                result = data_143ccb898(rcx_4)
                rdi_1 = *(rbx_2 + 8)
                *rbx_2 = result
                *(rbx_2 + 0x10) = 0
                *(rbx_2 + 0x18) = 0
            
            if (*rbx_2 != 0 || result != 0)
                result = recv(s, *rbx_2 + *(rbx_2 + 0x10), rdi_1.d, 0)
                
                if (result.d s> 0)
                    *(rbx_2 + 0x10) += sx.q(result.d)
            else
                *(rbx_2 + 8) = 0

return result
