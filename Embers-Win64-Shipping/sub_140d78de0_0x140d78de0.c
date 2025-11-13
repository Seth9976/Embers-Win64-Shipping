// 函数: sub_140d78de0
// 地址: 0x140d78de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

SystemParametersInfoW(SPI_SETSTICKYKEYS, 8, arg1 + 0x1a8, 0)
SystemParametersInfoW(SPI_SETTOGGLEKEYS, 8, arg1 + 0x1b0, 0)
SystemParametersInfoW(SPI_SETFILTERKEYS, 0x18, arg1 + 0x1b8, 0)
sub_140aeeff0(data_143ddb400, u"WindowsApplication.Accessibility", &data_143de5780)
int64_t* result = arg1 + 0x190
void var_18

if (result != &var_18)
    *result = 0
    int64_t* rbx_1 = result[1]
    
    if (rbx_1 != 0)
        result[1] = 0
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            result = (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                jump(*(*rbx_1 + 8))

return result
